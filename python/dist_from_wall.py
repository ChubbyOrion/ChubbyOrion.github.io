from scipy.stats import norm
import numpy as np
import matplotlib.pyplot as plt
import sys
import argparse

def read_ir_file(filepath):
    ir_sensors = dict()
    with open(filepath) as f:
        for line in f.readlines():
            if line.startswith("ir_intensity"):
                name,value = line.split(',')
                if name not in ir_sensors.keys():
                    ir_sensors[name] = np.array([], dtype=int)
                ir_sensors[name] = np.append(ir_sensors[name], int(value))
    return ir_sensors

def calculate_mean_stddev(ir_sensor_data):
    mean = np.mean(ir_sensor_data[0:100])
    std = np.std(ir_sensor_data[0:100])
    return mean, std

def plot_pdf(data_name, ir_sensor_data, mean, std):
    plt.title(data_name)
    plt.scatter(ir_sensor_data[100:], norm.pdf(ir_sensor_data, mean, std)[100:])
    plt.show()

def run(args):
    measurements = dict()
    mkey = 1
    for _, filename in enumerate([args.data_file_left_1in, args.data_file_left_1_5in, args.data_file_left_2in, 
args.data_file_left_2_5in, args.data_file_left_3in]):
        ir_sensors = read_ir_file(filename)
        sensors = dict()
        for sensor_name in ir_sensors.keys():
            mean, stddev = calculate_mean_stddev(ir_sensors[sensor_name])
            sensors[sensor_name] = dict()
            sensors[sensor_name]["mean"] = mean
            sensors[sensor_name]["stddev"] = stddev       
        measurements[mkey] = sensors
        mkey = mkey + .5

    queries = parse_query(args.query_file, measurements[1].keys())
    x = []
    dist = []
    prob = []
    for i in range(0, len(queries)):
        query = queries[i]
        name, probability = get_query_prob(measurements, query)
        x.append(i)
        dist.append(name)
        prob.append(probability)
#        print("{}: Name: {} Probability: {}".format(i, name, probability))
    plot_queries(x, dist, prob)

def plot_queries(x, dist, prob):
    fig, ax = plt.subplots(2,2,constrained_layout=True)
    ax[0,0].plot(x, dist)
    ax[0,0].set_title('Distance')
    ax[0,0].set(xlabel = "query number", ylabel = "distance(in)")
    ax[0,1].scatter(x, dist)
    ax[0,1].set_title('Distance')
    ax[0,1].set(xlabel = "query number", ylabel = "distance(in)")    
    ax[1,0].plot(x, prob)
    ax[1,0].set_title('Probability')
    ax[1,0].set(xlabel = "query number", ylabel = "probability")
    ax[1,1].scatter(x, prob)
    ax[1,1].set_title('Probability')
    ax[1,1].set(xlabel = "query number", ylabel = "probability")
#    plt.subplots_adjust(hspace=0.6)
    plt.show()

def parse_query(filepath, sensor_names):
    queries = []
    with open(filepath) as f:
        new_query = dict()
        is_building_query = False
        for line in f.readlines():
            if not is_building_query and line.startswith("ir_intensity"):
                is_building_query = True
            if is_building_query:
                done_building = False
                if "," in line:
                    name, value = line.split(",")
                    if name in sensor_names:
                        new_query[name] = int(value)
                    else:
                        done_building = True
                else:
                    done_building = True
                if done_building:
                    is_building_query = False
                    queries.append(new_query)
                    new_query = dict()
    return queries

def get_query_prob(measurements, query):
    max_measurement_name = None
    max_probability = 0
    for measurement_name in measurements.keys():
        measurement = measurements[measurement_name]
        prob = 0
        for sensor_name in measurement.keys():
            sensor = measurement[sensor_name]
            mean = sensor["mean"]
            stddev = sensor["stddev"]
            query_value = query[sensor_name]
            query_pdf = norm.pdf(query_value, mean, stddev)
            prob = prob + query_pdf
        if prob > max_probability:
            max_probability = prob
            max_measurement_name = measurement_name
    return max_measurement_name, max_probability


if __name__ == "__main__":
    parser = argparse.ArgumentParser(description="Estimate distance from wall")
    parser.add_argument('data_file_left_1in', metavar='d1', help='The file to read ir data for 1 in distance.')
    parser.add_argument('data_file_left_1_5in', metavar='d1_5', help='The file to read ir data for 1.5 in distance.')
    parser.add_argument('data_file_left_2in', metavar='d2', help='The file to read ir data for 2 in distance.')
    parser.add_argument('data_file_left_2_5in', metavar='d2_5', help='The file to read ir data for 2.5 in distance.')
    parser.add_argument('data_file_left_3in', metavar='d3', help='The file to read ir data for 3 in distance.')
    parser.add_argument('query_file', metavar='q', help='The file with sensor query data. Format: sensor_name,value.')
    args = parser.parse_args()
    run(args)
    

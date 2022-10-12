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
    ir_sensors = read_ir_file(args.data_file)
    for sensor_name in ir_sensors.keys():
        mean, variance = calculate_mean_stddev(ir_sensors[sensor_name])
        plot_pdf(sensor_name, ir_sensors[sensor_name], mean, variance)

if __name__ == "__main__":
    parser = argparse.ArgumentParser(description="Estimate distance from wall")
    parser.add_argument('data_file', metavar='f', help='The file to read which has ir data')
    args = parser.parse_args()
    run(args)
    

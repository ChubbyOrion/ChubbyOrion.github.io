from matplotlib import pyplot as plt
import csv
import itertools

with open('xyz.csv', 'r') as fi:
    df = [row for row in csv.reader(fi)]



x, y, z, _ = zip(*df)



xval = [i for i in range(len(z[1:]))]
yval = list(z)[1:]
print(yval)



print(len(xval), len(yval))

plt.scatter(xval,yval)
plt.show()

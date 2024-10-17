"""
- Create an array in range 1 to 20 with values 1.25 apart, Another array containing the log values of the elements in the first array . Create a plot of first vs second array . Specify the x-axis (containing first array's vallues) 

"""

import numpy as np

# Creating a range from 0 to 10 with a step of 1.25

"""
in x axis 1 to 20 

"""
range_array = np.arange(1, 20, 1.25)  # used as x axis
# print("Range of values ", range_array)
y = np.log(range_array)
print(y)

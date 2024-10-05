# Create a  function min_max() that takes n numbers as list argument and return the smallest and largest numbers

the_list = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]


def min_max(the_list):
    return min(the_list), max(the_list)


print(min_max(the_list))

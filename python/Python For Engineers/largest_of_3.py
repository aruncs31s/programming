# odd or even
def is_large(num_1,num_2):
    if (num_1 > num_2):
        return True
    else:
        return False
#def even_or_odd(x):

def largest_among_3_numbers(x,y,z):
    return is_large((is_large(x,y) and x or is_large(y,x) and y ) ( is_large(x,z) and x or is_large(z,x) and z))

print(int(largest_among_3_numbers(1,3,4)))

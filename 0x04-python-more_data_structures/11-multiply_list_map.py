"""
multiply_list_map: returns a list with all values multiplied
by a number without using any loops.
Return: a new list:
Same length as my_list
Each value should be multiplied by number
"""


def multiply_list_map(my_list=[], number=0):
    return list(map(lambda x: x * number, my_list))

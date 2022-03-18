#!/usr/bin/python3
"""
Finds the biggest integer of a list.
Return: None if list is empty, else the biggest integer.
"""
def max_integer(my_list=[]):
    biggest = 0
    for element in my_list:
        if element > biggest:
            biggest = element
    return biggest

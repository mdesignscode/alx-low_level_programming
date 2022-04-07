#!/usr/bin/python3
"""
Finds all multiples of 2 in a list.
Return: a new list with True or False,
depending on whether the integer at the same position
in the original list is a multiple of 2
"""


def is_div(element):
    if element % 2 == 0:
        return True
    return False


def divisible_by_2(my_list=[]):
    new_list = []
    for element in range(len(my_list)):
        new_list.append(element)
        new_list[element] = is_div(my_list[element])
    return new_list

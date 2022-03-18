#!/usr/bin/python3
"""
Prints all integers of a list, in reverse order.
Return: None.
"""


def print_reversed_list_integer(my_list=[]):
    count = len(my_list) - 1
    while count >= 0:
        print('{}'.format(my_list[count]))
        count -= 1

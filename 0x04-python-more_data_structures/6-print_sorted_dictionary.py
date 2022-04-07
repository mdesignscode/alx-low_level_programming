#!/usr/bin/python3
"""
print_sorted_dictionary: prints a dictionary by ordered keys.
Return: None
"""


def print_sorted_dictionary(a_dictionary):
    for i in sorted(a_dictionary):
        print('{}: {}'.format(i, a_dictionary[i]))

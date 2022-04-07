#!/usr/bin/python3
"""
Retrieves an element from a list like in C.
Return: None if idx is negative or out of range
"""


def element_at(my_list, idx):
    if idx < 0 or idx > len(my_list):
        return None

    p = my_list[idx]

    return p

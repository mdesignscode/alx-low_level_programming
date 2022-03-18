#!/usr/bin/python3
"""
Replaces an element of a list at a specific position (like in C).
Return: New list, or
The Original list if idx is negative or out of range.
"""
def replace_in_list(my_list, idx, element):
    if idx < 0 or idx > len(my_list):
        return my_list

    my_list[idx] = element

    return my_list

#!/usr/bin/python3
"""
Replaces an element in a list at a specific position,
without modifying the original list (like in C).
Return: New list
"""
def new_in_list(my_list, idx, element):
    copy = my_list[:]

    if idx < 0 or idx > len(my_list):
        return my_list

    copy[idx] = element

    return copy

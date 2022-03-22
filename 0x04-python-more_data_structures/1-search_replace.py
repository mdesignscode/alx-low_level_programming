#!/usr/bin/python3
"""
search_replace: Replaces all occurrences of an element
by another in a new list.
Return: A new list with the replaced element(s).
"""


def search_replace(my_list, search, replace):
    new_list = []
    for element in my_list:
        if element == search:
            new_list.append(replace)
        else:
            new_list.append(element)
    return new_list

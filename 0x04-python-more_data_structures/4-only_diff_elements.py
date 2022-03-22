#!/usr/bin/python3
"""
returns a set of all elements present in only one set.
Return: a set
"""


def only_diff_elements(set_1, set_2):
    new_set = set()
    for element_1 in set_1:
        for element_2 in set_2:
            new_set.add(element_2)
            if element_1 == element_2:
                new_set.remove(element_2)
        new_set.add(element_1)
        if element_1 == element_2:
            new_set.remove(element_1)
    return new_set

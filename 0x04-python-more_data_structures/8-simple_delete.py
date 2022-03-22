#!/usr/bin/python3
"""
simple_delete: deletes a key in a dictionary.
Return: None
"""


def simple_delete(a_dictionary, key=""):
    if key in a_dictionary:
        del a_dictionary[key]
    return a_dictionary

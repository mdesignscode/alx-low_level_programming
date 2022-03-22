#!/usr/bin/python3
"""
update_dictionary: replaces or adds key/value in a dictionary.
Return: new dictionary
"""


def update_dictionary(a_dictionary, key, value):
    if key in a_dictionary:
        a_dictionary[key] = value
    else:
        a_dictionary[key] = value
    return a_dictionary

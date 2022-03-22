#!/usr/bin/python3
"""
update_dictionary: replaces or adds key/value in a dictionary.
Return: new dictionary
"""


def update_dictionary(a_dictionary, key, value):
    a_dictionary.pop(key, None)
    return a_dictionary

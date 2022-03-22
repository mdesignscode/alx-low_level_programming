#!/usr/bin/python3
"""
best_score: returns a key with the biggest integer value.
Return: None if no score found
"""


def best_score(a_dictionary):
    if a_dictionary == None:
        return None

    return max(a_dictionary)

#!/usr/bin/python3
"""
best_score: returns a key with the biggest integer value.
Return: None if no score found else the highest score
"""


def best_score(a_dictionary):
    if a_dictionary == None or a_dictionary == {}:
        return None

    return max(a_dictionary)

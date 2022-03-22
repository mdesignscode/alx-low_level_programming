#!/usr/bin/python3
"""
uniq_add: adds all unique integers in a list (only once for each integer).
Return: sum of unique integers
"""


def uniq_add(my_list=[]):
    sum = 0
    Set = set(my_list)
    for element in Set:
        sum += element
    return sum

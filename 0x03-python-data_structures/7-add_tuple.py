#!/usr/bin/python3
"""
Adds 2 tuples.
Return: A tuple with 2 integers:
0: the addition of the first element of each argument
1: the addition of the second element of each argument
"""


def add_tuple(tuple_a=(), tuple_b=()):
    a_len = len(tuple_a)
    b_len = len(tuple_b)

    if a_len < 2:
        if a_len == 0:
            tuple_a = (0, 0)
        else:
            tuple_a = (tuple_a[0], 0)
    elif b_len < 2:
        if b_len == 0:
            tuple_b = (0, 0)
        else:
            tuple_b = (tuple_b[0], 0)
    return tuple_a[0] + tuple_b[0], tuple_b[1] + tuple_a[1]

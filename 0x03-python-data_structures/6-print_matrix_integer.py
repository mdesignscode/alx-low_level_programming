#!/usr/bin/python3
"""
Prints a matrix of integers.
Return: None
"""


def print_matrix_integer(matrix=[[]]):
    ll = len(matrix)

    if ll == 1:
        print('{}'.format())

    for i in range(ll):
        for j in range(len(matrix[i])):
            print('{}'.format(matrix[i][j]), end='')
            if j == ll - 1:
                print('{}'.format())
            else:
                print('{}'.format(' '), end='')

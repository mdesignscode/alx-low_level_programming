#!/usr/bin/python3
"""
square_matrix_simple: computes the square value of all integers of a matrix.
Return: a new matrix:
Same size as matrix
Each value should be the square of the value of the input
"""


def square_matrix_simple(matrix=[]):
    array = []
    for i in range(len(matrix)):
        array.append([matrix[i][j] ** 2 for j in range(len(matrix[i]))])
    return array

#!/usr/bin/python3
"""defines a square"""


class Square:
    """defines a square"""

    def __init__(self, size=0):
        """initialize size

        Args:
            size (int, optional): size of square. Defaults to 0.
        """
        self.__size = size

    def area(self):
        """returns the area of a square"""
        return self.__size ** 2

    @property
    def size(self):
        """retrieving size"""
        return self.__size

    @size.setter
    def size(self, value):
        """setting the size

        Args:
            value (int): size of new square
        """
        self.__size = value
        if isinstance(value, int) is False:
            raise TypeError('size must be an integer')
        elif value < 0:
            raise TypeError('size must be >= 0')

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
        """retrieving size of square"""
        return self.__size

    @size.setter
    def size(self, value):
        """setting the size of a square

        Args:
            value (int): size of new square
        """
        self.__size = value
        if isinstance(value, int) is False:
            raise TypeError('size must be an integer')
        elif value < 0:
            raise TypeError('size must be >= 0')

    def my_print(self):
        """prints a square to stdout"""
        for i in range(self.__size):
            for j in range(self.__size):
                print('#', end='')
            print()
        if self.__size == 0:
            print()

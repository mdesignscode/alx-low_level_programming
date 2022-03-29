#!/usr/bin/python3
"""defines as square"""


class Square:
    """defines a square"""

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

    @property
    def size(self):
        """retrieving size of square"""
        return self.__size

    @size.setter
    def position(self, value):
        """setting the position of a square

        Args:
            value (int, int): tuple of 2 positive integers to set new position
        """
        self.__position = value
        if isinstance(value, int, int) is False:
            raise TypeError('position must be a tuple of 2 positive integers')

    def __init__(self, size=0, position=(0, 0)):
        """initializes size and position of square

        Args:
            size (int, optional): size of square. Defaults to 0.
            position (tuple, optional): position of square. Defaults to (0, 0).
        """
        self.__size = size
        self.__position = position

    def area(self):
        """returns the area of a square"""
        return self.__size ** 2

    def my_print(self):
        """prints a square to stdout"""
        if self.__position[1] == 0 or self.__position is None:
            for i in range(self.__size):
                for x in range(self.__position[0]):
                    print(' ', end='')
                for j in range(self.__size):
                    print('#', end='')
                print()
        else:
            for i in range(self.__size):
                for j in range(self.__size):
                    print('#', end='')
                print()
        if self.__size == 0:
            print()

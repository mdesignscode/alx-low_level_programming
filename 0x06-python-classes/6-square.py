#!/usr/bin/python3
# """defines a square"""


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
    def position(self):
        """retrieving position of square"""
        return self.__position

    @position.setter
    def position(self, value):
        """setting the position of a square

        Args:
            value (int, int): tuple of 2 positive integers to set new position
        """
        if not isinstance(value, tuple) or \
                len(value) != 2 or \
                not all(isinstance(i, int) for i in value) or \
                not all(i >= 0 for i in value):
            raise TypeError('position must be a tuple of 2 positive integers')
        # self.__position = value

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
        if self.__size == 0:
            print()

        else:
            for i in range(self.__size):
                [print(' ', end='') for j in range(self.__position[0])]
                [print('#', end='') for n in range(self.__size)]
                print()

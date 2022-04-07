#!/usr/bin/python3
"""validates the the size of a square"""


class Square:
    """validates the the size of a square"""

    def __init__(self, size=0):
        """initialize the size of a square

        Args:
            size (int, optional): size of the square. Defaults to 0.
        """
        self.__size = size
        if isinstance(size, int) is False:
            raise TypeError('size must be an integer')
        elif size < 0:
            raise TypeError('size must be >= 0')

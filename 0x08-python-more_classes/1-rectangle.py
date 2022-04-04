#!/usr/bin/python3
"""defines a rectangle"""


class Rectangle:
    """defines a rectangle"""

    def __init__(self, width=0, height=0):
        """initialize the dimensions of a rectangle

        Args:
            width (int, optional): width of rectangle. Defaults to 0.
            height (int, optional): height of rectangle. Defaults to 0.
        """
        self.__width = width
        self.__height = height

    @property
    def width(self):
        """retrieving width of rectangle"""
        return self.__width

    @width.setter
    def width(self, value):
        """setting the width of a rectangle

        Args:
            value (int): width of new rectangle
        """
        self.__width = value
        if not isinstance(value, int):
            raise TypeError('width must be an integer')
        elif value < 0:
            raise TypeError('width must be >= 0')

    @property
    def height(self):
        """retrieving height of rectangle"""
        return self.__height

    @height.setter
    def height(self, value):
        """setting the height of a rectangle

        Args:
            value (int): height of new rectangle
        """
        self.__height = value
        if not isinstance(value, int):
            raise TypeError('height must be an integer')
        elif value < 0:
            raise TypeError('height must be >= 0')

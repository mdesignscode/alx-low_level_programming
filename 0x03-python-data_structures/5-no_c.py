#!/usr/bin/python3
"""
Removes all characters c and C from a string.
Return: the new string
"""
def no_c(my_string):
    str_copy = ''
    for letter in range(0, len(my_string)):
        if my_string[letter] != 'c' and my_string[letter] != 'C':
            str_copy += my_string[letter]
    return str_copy

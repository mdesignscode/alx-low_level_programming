#!/usr/bin/python3
"""
Returns a tuple with the length of a string and its first character.
Return: None
"""


def multiple_returns(sentence):
    if sentence == "":
        f_char = None
        s_len = 0
    else:
        s_len = len(sentence)
        f_char = sentence[0]
    return s_len, f_char

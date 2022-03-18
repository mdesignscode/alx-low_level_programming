#!/usr/bin/python3

def delete_at(my_list=[], idx=0):
    """
    Deletes the item at a specific position in a list.1
    Return: List without item, or
    Original list if idx is negative or out of range
    """
    if idx >= 0 and idx < len(my_list):
        del my_list[idx]
    return my_list

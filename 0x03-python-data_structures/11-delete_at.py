#!/usr/bin/python3
"""
Deletes the item at a specific position in a list.1
Return: List without item, or
Original list if idx is negative or out of range
"""
def delete_at(my_list=[], idx=0):
    del my_list[idx]
    return my_list

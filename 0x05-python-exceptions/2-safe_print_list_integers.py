#!/usr/bin/python3
def safe_print_list_integers(my_list=[], x=0):
    """prints the first x elements of a list and only integers.

    Args:
        my_list (list, optional): a list of any type. Defaults to [].
        x (int, optional): number of elements. Defaults to 0.
    """
    printed = 0
    for value in range(x):
        if type(my_list[value]) == type(123):
            print('{:d}'.format(my_list[value]), end='')
            printed += 1
    print()
    return printed

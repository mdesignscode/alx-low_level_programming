#!/usr/bin/python3
def safe_print_list_integers(my_list=[], x=0):
    """prints the first x elements of a list and only integers.

    Args:
        my_list (list, optional): a list of any type. Defaults to [].
        x (int, optional): number of elements. Defaults to 0.
    """
    printed = 0
    try:
        for item in range(x):
            if type(my_list[item]) == type(123):
                print('{:d}'.format(int(my_list[item])), end='')
                printed += 1
        print()
        return printed
    except TypeError:
        pass

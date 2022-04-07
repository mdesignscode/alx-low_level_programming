#!/usr/bin/python3
def safe_print_list(my_list=[], x=0):
    """prints x elements of a list.
    Returns the real number of elements printed.

    Args:
        my_list (list, optional): A list containing any type. Defaults to [].
        x (int, optional): the number of elements to print. Defaults to 0.
    """
    printed = 0
    length = 0

    for element in my_list:
        length += 1
    try:
        for elements in range(x):
            print('{}'.format(my_list[elements]), end='')
            printed += 1
        print()
        return printed
    except IndexError:
        print()
        return length

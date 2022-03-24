#!/usr/bin/python3
def safe_print_integer(value):
    """prints an integer with "{:d}".format().

    Args:
        value (any type): integer to be printed.
    """
    try:
        print('{:d}'.format(int(value)))
        return True
    except:
        pass

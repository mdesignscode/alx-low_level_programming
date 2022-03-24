#!/usr/bin/python3
def safe_print_division(a, b):
    """divides 2 integers and prints the result.

    Args:
        a (int): integer 1
        b (int): integer 2
    """
    result = 0
    try:
        result = a / b
        return result
    except:
        result = None
    finally:
        print('Inside result: {}'.format(result))

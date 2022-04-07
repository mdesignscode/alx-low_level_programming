#!/usr/bin/python3
def list_division(my_list_1, my_list_2, list_length):
    """divides element by element 2 lists.

    Args:
        my_list_1 (list): list to divide
        my_list_2 (list): list to be divided by
        list_length (int): length of list
    """
    new_list = []

    for item in range(list_length):
        try:
            # diving two elements
            result = my_list_1[item] / my_list_2[item]

        except ZeroDivisionError:
            print('division by 0')
            result = 0
        except IndexError:
            print('out of range')
            result = 0
        except TypeError:
            print('wrong type')
        finally:
            pass
        new_list.append(result)
    return new_list

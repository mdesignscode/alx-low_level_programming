"""
multiply_by_2: returns a new dictionary with all values multiplied by 2
Return: a new dictionary
"""


def multiply_by_2(a_dictionary):
    new_dictionary = {}
    new_dictionary.update(a_dictionary)

    for key, value in new_dictionary.items():
        new_dictionary[key] = value * 2

    return new_dictionary

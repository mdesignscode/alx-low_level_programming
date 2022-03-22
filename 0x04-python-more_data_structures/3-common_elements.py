"""
Returns a set of common elements in two sets.
Return: a set
"""


def common_elements(set_1, set_2):
    new_set = set()
    for element_1 in set_1:
        for element_2 in set_2:
            if element_1 == element_2:
                new_set.add(element_2)
    return new_set

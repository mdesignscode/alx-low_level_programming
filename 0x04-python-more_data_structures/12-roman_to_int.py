"""
roman_to_int: converts a Roman numeral to an integer.
Return: an integer or 0 if roman_string is not a string or None
"""


def roman_to_int(roman_string):
    int_value = 0
    roman_style = {'I': 1, 'V': 5, 'X': 10, 'L': 50,
                   'C': 100, 'D': 500, 'M': 1000}
    str_len = len(roman_string)

    for number in range(str_len):
        if number + 1 != str_len and roman_style[roman_string[number]] \
            < roman_style[roman_string[number + 1]]:
                int_value -= roman_style[roman_string[number]]
        else:
            int_value += roman_style[roman_string[number]]

    if type(roman_string) != type('roman') or roman_string == None:
        return 0

    return int_value

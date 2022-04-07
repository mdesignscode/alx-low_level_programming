#!/usr/bin/python3
def uppercase(str):
    new_str = ""
    for i in str:
        if ord(i) >= 97 and ord(i) < 123:
            new_str += chr(ord(i) - 32)
        else:
            new_str += i
    print('{}'.format(new_str))

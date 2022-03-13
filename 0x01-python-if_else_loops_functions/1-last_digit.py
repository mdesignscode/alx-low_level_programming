#!/usr/bin/python3
import random
number = random.randint(-10000, 10000)
s = 'Last digit of '
s2 = ' and is '
if number < 0:
    number *= -1
last = number % 10
if last > 5:
    print('{}{} is {}{}greater than 5'.format(s, number, last, s2))
elif last == 0:
    print('{}{} is {}{}0'.format(s, number, last, s2))
elif last < 6 and not 0:
    print('{}{} is {}{}less than 6 and not 0'.format(s, number, last, s2))

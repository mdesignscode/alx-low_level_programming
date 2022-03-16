#!/usr/bin/python3
from sys import argv

argc = len(argv)

if __name__ == '__main__':
    if argc == 2:
        print('{} argument:'.format(1))
        print('1: {}'.format(argv[1]))
    elif argc == 1:
            print('{} arguments.'.format(0))
    else:
        print('{} arguments:'.format(argc - 1))
        for i in range(1, argc):
            print('{}: {}'.format(i, argv[i]))

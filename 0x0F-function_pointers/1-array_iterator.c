#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "function_pointers.h"
/**
 * array_iterator - executes a function given as a parameter
 * on each element of an array
 * @array: the array to be used.
 * @size: size of the array.
 * @action: a pointer to the function you need to use
 * Return: nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	while (size-- && array)
		action(*array++);
}

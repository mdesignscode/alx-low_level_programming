#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * int_index - searches for an integer.
 * @array: array to be used.
 * @size: the number of elements in the array array.
 * @cmp: a pointer to the function to be used to compare values
 *
 * Return: index of the first element for which the cmp function
 * does not return 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index = 0;

	if (!cmp || size < 1)
		return (-1);
	for (; index < size; index++)
	{
		if (cmp(array[index]))
			return (index);
	}
	return (index);
}

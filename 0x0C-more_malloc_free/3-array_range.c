#include <stdlib.h>
#include "main.h"
/**
 * array_range - creates an array of integers.
 * Description: The array created should contain all the values from
 * min (included) to max (included), ordered from min to max.
 * @min: values to start filling the space.
 * @max: values to fill the space to.
 *
 * Return: pointer to the newly created array.
 */
int *array_range(int min, int max)
{
	int *array, index, ctr;

	ctr = 0;
	if (min > max)
		return (NULL);
	for (index = min; index <= max; index++, ctr++)
		;

	array = malloc(sizeof(int) * ctr);
	if (!array)
		return (NULL);
	for (index = min; index <= max; index++)
		array[index] = index;
	return (array);
}

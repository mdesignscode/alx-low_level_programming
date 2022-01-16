#include <stdlib.h>
#include "main.h"
/**
 * _realloc - reallocates a memory block using malloc and free.
 * @ptr: pointer used to reallocate memory.
 * @old_size: the size of previously allocated memory.
 * @new_size: the size of new memory block
 *
 * Return: a pointer to new memory location.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int index, ctr;
	char *copy, *fill;

	index = ctr = 0;
	fill = malloc(sizeof(old_size) * old_size);
	if (!fill)
		return (NULL);

	copy = fill;
	for (; index < old_size; index++)
	{
		copy[index] = fill[index];
	}
	fill = malloc(sizeof(new_size) * new_size);
	if (!fill)
		return (NULL);
	if (new_size > old_size)
	{
		while (index < old_size)
		{
			fill[index] = copy[index];
			index++;
		}
	}
	if (new_size == old_size)
		return (fill);
	if (!ptr)
		fill = malloc(new_size);
	if (new_size == 0 && !!ptr)
	{
		free(fill);
		return (NULL);
	}
	for (; index < old_size; index++)
	{
		for (; ctr < new_size; new_size++)
			fill[ctr] = copy[index++];
	}
	ptr = fill;
	return (ptr);
}

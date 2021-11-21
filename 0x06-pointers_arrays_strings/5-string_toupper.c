#include "main.h"
/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * @ptr: string to return.
 *
 * Return: 0.
 */
char *string_toupper(char *ptr)
{
	int i;

	for (i = 0; ptr[i] != '\0'; i++)
	{
		if (ptr[i] >= 97 && ptr[i] <= 122)
		{
			ptr[i] = ptr[i] - 32;
		}
	}

	return (ptr);
}

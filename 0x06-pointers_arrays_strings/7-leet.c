#include "main.h"
/**
 * leet - encodes a string into 1337.
 *
 * Return: 0.
 */
char *leet(char *ptr)
{
	int i, j;
	char lower[] = { 'a', 'e', 'o', 't', 'l' };
	char upper[] = { 'A', 'E', 'O', 'T', 'L' };
	char digits[] = { '4', '3', '0', '7', '1' };

	for (i = 0; ptr[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if ((ptr[i] == lower[j]) || (ptr[i] == upper[j]))
				ptr[i] = digits[j];
		}
	}
	return (ptr);
}

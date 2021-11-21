#include "main.h"
/**
 * _strspn - finds the length of a prefix substring.
 * @s: string to search in.
 * @accept: substring to be searched.
 *
 * Return: the number which consists of accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j] != s[i]; j++)
		{
			if (accept[j] == 0)
				return (i);
		}

	}

	return (i);
}

#include "main.h"
/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: string to look in.
 * @accept: bytes to be looked for.
 *
 * Return: pointer to the byte in s that matches one of the bytes in accept.
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *p;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				p = &s[i];
				return (p);
			}

		}

	}

	return (0);
}

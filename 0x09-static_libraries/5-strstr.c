#include "main.h"
/**
 * _strstr - locates a substring.
 * @haystack: string to look in.
 * @needle: substring to be found.
 *
 * Return: a pointer to the beginning of the located substring.
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;
	char *p;

	p = 0;
	for (i = 0; haystack[i]; i++)
	{
		for (j = 0; needle[j]; j++)
		{
			if (needle[j] == haystack[i])
			{
				p = &haystack[i];
				return (p);
			}
		}
	}

	return (p);
}

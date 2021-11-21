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
	int i, j = 0;

	for (i = 0; haystack[i]; i++)
	{
		if (haystack[i] == needle[j])
		{
			while (haystack[i + j] == needle[j] && needle[j])
				j++;

			if (needle[j] == '\0')
				return (needle);

			j = 0;
		}

	}


	return (0);
}

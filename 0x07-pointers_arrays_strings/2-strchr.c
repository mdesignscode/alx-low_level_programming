#include "main.h"
/**
 * _strchr - locates a character in a string.
 * @s: pointer to string.
 * @c: character to be located.
 *
 * Return: s.
 */
char *_strchr(char *s, char c)
{
	int i;
	char *p;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			p = &s[i];
			break;
		}
		i++;
	}

	return (p);
}

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

	for (i = 0; s[i]; i++)
	{
		if (s[i] == c)
			return (s + i);
		s++;
	}
	return (s);
}

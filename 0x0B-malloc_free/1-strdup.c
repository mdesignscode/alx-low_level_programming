#include <stdlib.h>
#include "holberton.h"
/**
 * _strdup returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: string to be duplicated.
 * Return: 0.
 */
char *_strdup(char *str)
{
	char *p;
	int len, i;

	if (str == NULL)
		return (NULL);
	for (len = 0; str[len]; len++)
		;

	p = malloc(sizeof(char) * len);
	if (p == NULL)
		return (NULL);
	for (i = 0; i <= len; i++)
		p[i] = str[i];
	return (p);
}

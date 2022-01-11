#include <stdlib.h>
#include "holberton.h"
/**
 * _strlen - counts the length of a string.
 * @s: string to be counted.
 *
 * Return: length of string.
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len])
		len++;

	return (len);
}
/**
 * str_concat - concatenates two strings.
 * @s1: string 1.
 * @s2: string 2.
 *
 * Return: 0.
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, k, l;
	char *p;

	if (!s1)
		i = 0;
	else
		for (i = 0; s1[i]; i++)
			;

	if (!s2)
		j = 0;
	else
		for (j = 0; s2[j]; j++)
			;
	k = i + j + 1;
	p = malloc(sizeof(char) * k);
	if (!p)
		return (NULL);
	for (l = 0; l < i; l++)
		p[l] = s1[l];
	for (l = 0; l < j; l++)
		p[l] = s2[l];
	p[l] = '\0';
	return (p);
}

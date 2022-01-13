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
 * Return: pointer to concatenated string.1
 */
char *str_concat(char *s1, char *s2)
{
	int l1, l2, l3, i, j;
	char *p;

	l1 = _strlen(s1);
	l2 = _strlen(s2);
	l3 = l1 + l2 + 1;

	p = malloc(sizeof(char) * l3);

	if (!p || !s1 || !s2)
		return (NULL);

	for (i = 0; s1[i]; i++)
		p[i] = s1[i];
	for (j = 0; s2[j]; j++)
		p[i++] = s2[j];

	p[i] = '\0';
	return (p);
}

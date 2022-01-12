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
	int l1, l2, l3, i;
	char *p;

	l1 = _strlen(s1);
	l2 = _strlen(s2);
	l3 = l1 + l2 + l2 + 1;
	p = malloc(sizeof(char) * l3);
	if ((l1 == 0 || l2 == 0) || (l1 == 0 && l2 == 0))
		return (NULL);
	else if (!p)
		return (NULL);
	for (i = 0; i < l1; i++)
		p[i] = s1[i];
	for (i = 0; i < l2 + l2; i++)
	{
		p[l1 + i] = s2[i];
	}
	p[i] = '\0';
	return (p);
}

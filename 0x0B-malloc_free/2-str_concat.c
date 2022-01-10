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
	int l1, l2, l3, i = 0;
	char *a;

	l1 = _strlen(s1);
	l2 = _strlen(s2);
	l3 = l1 + l2 + 1;
	a = malloc(l3);

	while(*s1 != '\0')
	{
		a[i] = *s1;
		s1++;
		i++;
	}
	while(*s2 != '\0')
	{
		a[i] = *s2;
		s2++;
		i++;
	}

	a[i] = '\0';

	if (a == NULL)
		return (NULL);
	return a;
}

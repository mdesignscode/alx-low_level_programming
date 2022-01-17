#include <stdlib.h>
#include "main.h"
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
 * string_nconcat - concatenates two strings.
 * Description: If n is greater or equal to the length of s2
 * then use the entire string s2
 * @s1: string 1.
 * @s2: string 2.
 * @n: number of bytes to appended.
 *
 * Return: a pointer to the new string of n bytes appended.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, l1, l2, l3, index = 0;
	char *p;

	if (!s1)
		s1 = "";
	else if (!s2)
		s2 = "";
	l1 = _strlen(s1);
	l2 = _strlen(s2);
	if (n >= l2)
	{
		n = l2;
		l3 = l2 + 1;
		p = malloc(sizeof(char) * l3);
		if (!p)
			return (NULL);
		for (j = 0; j < n; j++)
			p[j] = s2[j];
		p[j] = '\0';
	}
	else
	{
		l3 = l1 + n + 1;
		p = malloc(sizeof(char) * l3);
		if (!p)
			return (NULL);
		for (i = 0; s1[i]; i++)
			p[index++] = s1[i];
		for (j = 0; j < n; j++, index++)
			p[l1 + j] = s2[j];
		p[index] = '\0';
	}
	return (p);
}

#include <stdlib.h>
#include "main.h"

/**
 * _strlen -calculate the length of string
 * @s: the string
 *
 * Return: length
 */
int _strlen(char *s)
{
	char *p = s;

	while (*s)
		s++;
	return (s - p);
}

/**
 * string_nconcat - concatenating two string
 * @s1: string1
 * @s2: string2
 * @n: integer
 * Return: concat
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, s, l1, l2;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	l1 = _strlen(s1);
	l2 = _strlen(s2);
	if (n >= l2)
		n = l2;
	s = l1 + n;
	ptr = malloc(sizeof(char) * s + 1);
	if (!ptr)
		return (NULL);
	for (i = 0; i < l1; i++)
		ptr[i] = s1[i];
	for (j = 0; j < l2; j++, i++)
		ptr[i] = s2[j];
	ptr[i] = 0;
	return (0);
}

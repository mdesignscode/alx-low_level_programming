#include "main.h"
/**
 * rev_string - reverse a string.
 * @s:
 *
 * Return: ALways 0.
 */
void rev_string(char *s)
{
	int i;
	char ch;
	int len = 0;

	while (s[len])
		len++;

	for (i = 0; i < len / 2; i++)
	{
		ch = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = ch;
	}
}

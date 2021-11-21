#include "main.h"
/**
 * rev_string - reverse a string.
 * @s:
 *
 * Return: ALways 0.
 */
void rev_string(char *s)
{
	char *ptr1, *ptr2, temp;
	int i, len;

	len = 0;
	ptr1 = s;
	ptr2 = s;
	while (s[len] != '\0')
		len++;

	for (i = 0; i < len - 1; i++)
		ptr2++;
	for (i = 0; i < len / 2; i++)
	{
		temp = *ptr2;
		*ptr2 = *ptr1;
		*ptr1 = temp;

		ptr1++;
		ptr2--;
	}
}

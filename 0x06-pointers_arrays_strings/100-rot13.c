#include "main.h"
/**
 * rot13 -  encodes a string using rot13.
 * @s: receiving string.
 *
 * Return: 0.
 */
char *rot13(char *s)
{
	int i, j;
	char letters[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i]; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if ((s[i] == letters[j]))
			{
				s[i] = rot13[j];
				break;
			}
		}
	}
	return (s);
}

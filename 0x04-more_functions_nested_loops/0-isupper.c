#include "main.h"
/**
 * _isupper - checks for uppercase character.
 *
 * @c: character to be tested.
 *
 * Return: Always 1 or 0.
 *
 */
int _isupper(int c)
{
	int n;

	for (n = 65; n <= 90; n++)
	{
		if (c == n)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
	return (0);
}

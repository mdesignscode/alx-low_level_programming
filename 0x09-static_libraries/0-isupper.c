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

	for (n = 'A'; n <= 'Z'; n++)
	{
		if (c == n)
		{
			return (1);
		}
	}
	return (0);
}

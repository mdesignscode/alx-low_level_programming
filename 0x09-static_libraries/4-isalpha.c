#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 *
 * @c: character to be tested
 *
 * Return: 1 or 0.
 *
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

#include "main.h"
/**
 * print_rev - prints a string, in reverse, followed by a new line.
 *
 * @s: character to be tested.
 *
 * Return: ALways 0.
 */
void print_rev(char *s)
{
	int len = 0;

	while (s[len])
		len++;

	while (len--)
	{
		_putchar(s[len]);
	}
	_putchar('\n');
}

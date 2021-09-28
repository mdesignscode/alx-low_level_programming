#include "main.h"
/**
 * print_to_98 - prints all natural numbers from n to 98,
 * followed by a new line.
 *
 * @n: integer to be tested.
 *
 * Return: Always 0.
 *
 */
void print_to_98(int n)
{
	int i;

	for (n = 48; n < 58; n++)
	{
		for (i = 48; i < 57; i++)
		{
			_putchar(n);
			_putchar(i);
		}
	}
}

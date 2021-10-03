#include "main.h"
/**
 * print_square - size of the square.
 *
 * @n: size of the square.
 *
 * Return: Always 0.
 *
 */
void print_square(int n)
{
	int i;
	int j;

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}

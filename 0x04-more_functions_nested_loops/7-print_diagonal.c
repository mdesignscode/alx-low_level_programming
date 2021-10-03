#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal.
 *
 * @n: number of times \ should be printed.
 *
 * Return: Always 0.
 *
 */
void print_diagonal(int n)
{
	int i;
	int j;

	i = 0;
	while (i < n && n > 0)
	{
		j = 0;
		while (j < i)
		{
			_putchar(' ');
			j++;
		}
		_putchar('\\');
		_putchar('\n');
		i++;
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}

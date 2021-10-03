#include "main.h"
/**
 * print_square - size of the square.
 *
 * @size: size of the square.
 *
 * Return: Always 0.
 *
 */
void print_square(int size)
{
	int i;
	int n;

	for (i = 1; i <= size; i++)
	{
		for (n = 1; n <= size; n++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}

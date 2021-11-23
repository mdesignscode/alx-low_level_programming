#include "main.h"
/**
 * print_times_table - prints the n times table, starting with 0.
 * Description: If n is greater than 15 or less than 0
 * the function should not print anything
 * @n: digit to be multiplied.
 *
 * Return: nothing.
 */
void print_times_table(int n)
{
	int i, j, product;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			if (n > 15 || n < 0)
				return;
			product = i * j;
			if (j == 0)
			{
				_putchar(48 + j);
			}

			else if (product < 10)
			{
				_putchar(32);
				_putchar(32);
				_putchar(product + 48);
			}

			else if (product < 100)
			{
				_putchar(32);
				_putchar((product / 10) + '0');
				_putchar((product % 10) + '0');
			}
			else
			{
				_putchar((product / 100) + '0');
				_putchar(((product - 100) / 10) + '0');
				_putchar((product % 10) + '0');
			}
			if (j < n)
			{
				_putchar(44);
				_putchar(32);
			}
		}
		_putchar(10);
	}
}

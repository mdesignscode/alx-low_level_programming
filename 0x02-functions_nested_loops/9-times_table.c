#include "main.h"
/**
 * times_table - prints the 9 times table.
 *
 * Return: 0.
 */
void times_table(void)
{
	int i, j, product;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (j == 0)
			{
				_putchar(48);
				continue;
			}
			product = i * j;
			_putchar(44);
			_putchar(32);

			if (product > 9)
			{
				_putchar((product / 10) + '0');
				_putchar((product % 10) + '0');
			}

			else
			{
				_putchar(32);
				_putchar(product + 48);
			}
		}
		_putchar(10);
	}
}

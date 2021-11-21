#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0.
 *
 * Return: Always 0.
 *
 */
void times_table(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			_putchar(i * j);
			if (i != 9)
			{
				_putchar(44);
				_putchar(32);
			}

		}
		_putchar('\n');
	}
}

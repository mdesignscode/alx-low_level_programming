#include "main.h"
/**
 * more_numbers - prints 10 times the numbers, from 0 to 14, followed by
 * a new line.
 *
 * Return: Always 0.
 *
 */
void more_numbers(void)
{
	int i;
	int n;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (n = 0; n <= 14; n++)
		{
			j = n;
			if (n > 9)
			{
				_putchar('1');
				j = n % 10;
			}
			_putchar('0' + j);
		}
		_putchar('\n');
	}
}

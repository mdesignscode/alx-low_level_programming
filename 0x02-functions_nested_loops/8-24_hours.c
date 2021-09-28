#include "main.h"
/**
 * jack_bauer - prints every minute of the day of Jack Bauer,
 * starting from 00:00 to 23:59
 *
 * Return: Always 0.
 *
 */
void jack_bauer(void)
{
	int h1;
	int h2;
	int h3;
	int m1;
	int m2;

	for (h1 = 48; h1 < 50; h1++)
	{
		for (h2 = 48; h2 <= 57; h2++)
		{

			for (m1 = 48; m1 < 54; m1++)
			{
				for (m2 = 48; m2 <= 57; m2++)
				{
					_putchar(h1);
					_putchar(h2);
					_putchar(58);
					_putchar(m1);
					_putchar(m2);
					_putchar('\n');
				}
			}
		}
	}
	for (h3 = 48; h3 < 52; h3++)
	{
		for (m1 = 48; m1 < 54; m1++)
		{
			for (m2 = 48; m2 <= 57; m2++)
			{
				_putchar(50);
				_putchar(h3);
				_putchar(58);
				_putchar(m1);
				_putchar(m2);
				_putchar('\n');
			}
		}
	}
}

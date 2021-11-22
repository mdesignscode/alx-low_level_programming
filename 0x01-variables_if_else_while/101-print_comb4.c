#include <stdio.h>
/**
 * main - prints all possible different combinations of three digits.
 *
 * Return: 0.
 */
int main(void)
{
	int d1, d2, d3;

	d1 = 48;
	while (d1 < 58)
	{
		d2 = d1 + 1;
		while (d2 < 58)
		{
			d3 = d2 + 1;
			while (d3 < 58)
			{
				putchar(d1);
				putchar(d2);
				putchar(d3);
				if (d1 < (58 - 3))
				{
					putchar(44);
					putchar(32);
				}
				d3++;
			}
			d2++;
		}
		d1++;
	}

	putchar(10);
	return (0);
}

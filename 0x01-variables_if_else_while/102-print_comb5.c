#include <stdio.h>
/**
 * main - prints all possible combinations of two two-digit numbers.
 *
 * Return: 0.
 */
int main(void)
{
	int d00, d01, d12, d13, n;

	n = 0;
	d00 = 48;
	while (d00 < 58)
	{
		d01 = 48;
		while (d01 < 57)
		{
			d12 = 48;
			while (d12 < 58)
			{
				d13 = d01 + 1;
				while (d13 < 58)
				{
					if (n > 0)
					{
						putchar(44);
						putchar(32);
					}
					putchar(d00);
					putchar(d01);
					putchar(32);
					putchar(d12);
					putchar(d13);
					n++;
					d13++;
				}
				d12++;
			}
			d01++;
		}
		d00++;
	}

	putchar(10);
	return (0);
}

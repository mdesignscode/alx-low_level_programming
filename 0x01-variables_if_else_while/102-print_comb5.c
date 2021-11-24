#include <stdio.h>
/**
 * main - prints all possible combinations of two two-digit numbers.
 *
 * Return: 0.
 */
int main(void)
{
	int d00, d01, d12, d13;
	int sep1 = 0;
	int sep2 = 0;

	d00 = 0;
	while (d00 < 10)
	{
		d01 = 0;
		while (d01 < 10)
		{
			d12 = 0;
			while (d12 < 10)
			{
				d13 = 0;
				while (d13 < 10)
				{
					if (!(d00 == d13) && (d01 == d12))
					{
						putchar(sep1);
						putchar(sep2);
						putchar(48 + d00);
						putchar(48 + d01);
						putchar(32);
						putchar(48 + d12);
						putchar(48 + d13);
						sep1 = ',';
						sep2 = ' ';
					}

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

#include <stdio.h>
/**
 * main - prints the first 98 Fibonacci numbers, starting with 1 and 2.
 *
 * Return: 0.
 */
int main(void)
{
	int c;
	unsigned long int a = 0, b = 1, sum = 0;
	for (c = 0; c < 98; c++)
	{
		sum = a + b;
		a = b;
		b = sum;
		printf("%lu", sum);


		if (c < 97)
		{
			putchar(44);
			putchar(32);
		}
	}

	putchar(10);
	return (0);
}

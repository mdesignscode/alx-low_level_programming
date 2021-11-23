#include <stdio.h>
/**
 * main - finds and prints the sum of the even-valued fibonacci terms under
 * 4 000 000;
 *
 * Return: 0.
 */
int main (void)
{
	int n1 = 0, n2 = 1, n3, sum = 0;

	for (n3 = 0; n3 < 4000000; n3++)
	{
		n3 = n1 + n2;

		n1 = n2;
		n2 = n3;

		if (n3 % 2 == 0)
		{
			 sum += n3;
		}

	}
	printf("%d", sum);
	putchar(10);
	return (0);

}

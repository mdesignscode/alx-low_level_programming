#include <stdio.h>
/**
 * main - print base 10 single digits
 * Description: print 0 to 9
 * Return: Always 0.
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		printf("%d", n);
	}
	printf("\n");
	return (0);
}

#include <stdio.h>
/**
 * main - print base 10 single digits
 * Description: print 0 to 9
 * Return: Always 0.
 */
int main(void)
{
	int dig;

	for (dig = 0; dig <= 9; dig++)
	{
		printf("%d", dig);
	}
	printf("\n");
	return (0);
}
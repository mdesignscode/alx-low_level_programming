#include <stdio.h>
/**
 * main - use putchar
 * Description: print the alphabet in lower case in reverse
 * Return: Always 0.
 */
int main(void)
{
	int az;
	int nl;

	nl = '\n';
	for (az = 'z'; az >= 'a'; az--)
	{
		putchar(az);
	}
	putchar(nl);
	return (0);
}

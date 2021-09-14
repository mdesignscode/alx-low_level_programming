#include <stdio.h>
/**
 * main - use getchar
 * Description: print the alphabet in lower case
 * Return: Always 0.
 */
int main(void)
{
	int az;
	int nl;

	nl = '\n'';
	for(az = 'a'; az <= 'z'; az++)
	{
		putchar(az);
	}
	putchar(nl);
	return(0);
}

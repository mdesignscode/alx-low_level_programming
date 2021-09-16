#include "main.h"
/**
 * main - use _putchar
 * Description: print: _putchar
 * Return: Always 0.
 */
int main(void)
{
	char *c = "_putchar";
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar(c[i]);
	}
	return (0);
}

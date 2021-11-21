#include "main.h"
/**
 * puts_half - prints half of a string, followed by a new line.
 * @str: pointer to be tested.
 *
 * Return: ALways 0.
 */
void puts_half(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;
	for (i /= 2; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

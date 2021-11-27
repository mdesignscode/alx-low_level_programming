#include "main.h"
/**
 * set_string - sets the value of a pointer to a char.
 * @s: string 1.
 * @to: string to be replaced with s.
 *
 * Return: 0.
 */
void set_string(char **s, char *to)
{
	*s = to;
}

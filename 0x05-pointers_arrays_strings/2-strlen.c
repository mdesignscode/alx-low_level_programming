#include "main.h"
#include <string.h>

/**
 * _strlen - Swap integer
 * @s: pointer
 * Return: void
 */
int _strlen(char *s)
{
int i = 0;
while (s[i])
	i++;

return (i);
}

#include "main.h"

/**
 * swap_int - Swap integer
 * @a: pointer initial value = 98
 * @b: pointer initial value = 42
 * Return: void
 */
void swap_int(int *a, int *b)
{
*a = *a - *b;
*b = *a + *b;
*a = *b - *a;
}

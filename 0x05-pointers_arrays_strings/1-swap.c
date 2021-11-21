#include "main.h"
/**
 * swap_int - swaps the values of two integers.
 *
 * @a: integer to be tested.
 *
 * @b: integer to be tested.
 *
 * Return: ALways 0.
 */
void swap_int(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}

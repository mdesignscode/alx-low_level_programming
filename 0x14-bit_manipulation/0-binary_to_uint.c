#include "main.h"
/**
 * binary_to_uin - converts a binary number to an unsigned int.
 * @b: a pointer to a string of 0 and 1 chars.
 *
 * Return: the converted number, or 0.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal, numbers;
	int power, index, rem;
	char *duplicate;

	duplicate = scopy(b);
	numbers = btoc(duplicate);
	decimal = index = 0;
	power = 1;

	if (!b)
		return (0);

	while (numbers != 0)
	{
		if (b[index] != 48 && b[index] != 49)
			return (0);
		rem = numbers % 10;
		decimal += rem * power;
		numbers /= 10;
		power *= 2;
		index++;
	}
	return (decimal);
}

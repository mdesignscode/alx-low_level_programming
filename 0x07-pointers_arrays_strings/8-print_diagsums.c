#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals of a
 * square matrix of integers.
 * @a: matrix.
 * @size: size of matrix.
 *
 * Return: nothing.
 */
void print_diagsums(int *a, int size)
{
	int i = 0, j = size - 1;
	int sum1 = 0, sum2 = 0;

	while (i < size * size)
	{
		sum1 += a[i];
		i += size + 1;
	}

	printf("%d,", sum1);

	while (j < size * size - 1)
	{
		sum2 += a[j];
		j += size - 1;
	}

	printf(" %d\n", sum2);
}

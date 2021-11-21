#include <stdio.h>
/**
 * print_array - prints n elements of an array of integers.
 * @a: integer type pointer.
 * @n: number of elements of the array to be printed.
 *
 * Description: Numbers must be separated by comma, followed by a space.
 * The numbers should be displayed in the same order as they
 * are stored in the array.
 *
 * Return: Nothing.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i < n - 1)
		{
			printf(", ");
		}

	}
	printf("\n");
}

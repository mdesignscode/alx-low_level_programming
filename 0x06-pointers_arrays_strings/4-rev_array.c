#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers.
 * @a: integer type pointer.
 * @n: the number of elements of the array.
 *
 * Return: ALways 0.
 */
void reverse_array(int *a, int n)
{
	int i, j, temp;
	for (i = 0; i < n; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			while (a[j] > a[i])
			{
				temp = a[j];
				a[j] = a[i];
				a[i] = temp;
			}
		}
	}
}

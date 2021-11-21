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
	int inner;
	int outer;
	int temp;
	int flag;

	for (outer = 0; outer < (n - 1); outer++)
	{
		flag = 0;
		for (inner = 0; inner < (n - 1 - outer); inner++)
		{
			if (a[inner] < a[inner + 1])
			{
				temp = a[inner];
				a[inner] = a[inner + 1];
				a[inner + 1] = temp;
				flag = 1;
			}
		}
		if (flag == 0)
		{
			break;
		}
	}
}

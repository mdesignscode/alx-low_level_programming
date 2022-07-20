#include "3-calc.h"

/**
 * main - main fuction.
 * @argc: argument count.
 * @argv: argument vector.
 *
 * Return: 0.
 */
int main(int argc, char **argv)
{
	int result, num1, num2;
	char *operator;
	int (*f)(int a, int b);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	operator = argv[2];
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	f = get_op_func(operator);
	if (!f)
	{
		printf("Error\n");
		exit(99);
	}

	if ((operator[0] == '/' || operator[0] == '%') && (num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	result = f(num1, num2);

	printf("%d\n", result);
	return (0);
}

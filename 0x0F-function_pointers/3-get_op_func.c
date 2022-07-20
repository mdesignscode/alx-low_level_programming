#include "3-calc.h"

/**
 * get_op_func - selects the correct function to perform
 * the operation asked by the user.
 * @s: operator passed as argument to program.
 *
 * Return: a pointer to the function that needs to be performed.
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};
	int i;

	i = 0;
	while (i < 5)
	{
		if (ops->op[i] == s[0])
			return (ops->f);
		i++;
	}

	return (NULL);
}

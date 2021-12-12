#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers.
 * @argc: number of arguments provided.
 * @argv: string of arguments provided.
 *
 * Return: 0.
 */
int main(int argc, char **argv)
{
	if (argc == 3)
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

	else if (argc < 3)
		printf("Error\n");

	return (0);
}

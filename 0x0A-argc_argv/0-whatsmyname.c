#include <stdio.h>
/**
 * main - prints the program's name, followed by a new line.
 * @argc: number of arguments provided.
 * @argv: string of arguments provided.
 *
 * Return: 0.
 */
int main(int argc, char **argv)
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}

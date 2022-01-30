#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * main - prints its own opcodes
 * @argc: argument count.
 * @argv: argument vector.
 *
 * Return: 0.
 */
int main(int argc, char* argv[])
{
	/**
	 * You are allowed to use printf and atoi
	 * You have to use atoi to convert the argument to an int
	 * If the number of argument is not the correct one, print Error, followed by a new line, and exit with the status 1
	 * If the number of bytes is negative, print Error, followed by a new line, and exit with the status 2
	 *
	 * the opcodes should be printed in hexadecimal, lowercase
	 * each opcode is two char long
	 * listing ends with a new line
	 */

	/**
	 * convert argv to int for number of bytes
	 * IF argc != 2
	 * 	printf(Error) && exit with status 1
	 * IF argv[1] < 1
	 *	printf(Error) && exit with status 2
	 * print printf("%02hhx\n");
	 */
	int index, bytes;
	char *code;

	bytes = atoi(argv[1]);
	code = (char *)main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	if (bytes < 1)
	{
		printf("Error\n");
		exit(2);
	}
	for (index = 0; index < bytes - 1; index++)
	{
		printf("%02hhx\n", code[index]);
	}
	return (0);
}

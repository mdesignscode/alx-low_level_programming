#include <stdio.h>
/**
 * main - prints all arguments it receives.
 * Description: All arguments should be printed, including the first one
 * Only print one argument per line, ending with a new line
 *
 * Return: 0.
 */
int main (int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}

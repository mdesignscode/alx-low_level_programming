#include "main.h"
/**
 * main - copies the content of a file to another file.
 * @argc: argument count.
 * @argv: argument vector.
 *
 * Return: 0.
 */
int main(int argc, char **argv)
{
	int file_from, file_to, reaD, writE, index, close_from, close_to;
	charptr buffer;
	charptr error97 = "Usage: cp file_from file_to\n";
	charptr error98 = "Error: Can't read from file ";
	charptr error99 = "Error: Can't write to ";
	charptr error100 = "Error: Can't close ";
	charptr newline = "\n";

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, error97);
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_WRONLY | O_TRUNC);
	if (file_to == -1)
		file_to = open(argv[2], O_WRONLY | O_CREAT, S_IWUSR | S_IRUSR | S_IRGRP | S_IWGRP | S_IROTH);
	buffer = malloc(sizeof(char) * 1024);
	if (file_from == 3)
	{
		while ((reaD = read(file_from, buffer, 1024)) != 0)
			writE = write(file_to, buffer, reaD);
	}
	if (file_from == -1 || reaD == -1)
	{
		dprintf(STDERR_FILENO, error98);
		dprintf(STDERR_FILENO, argv[1]);
		dprintf(STDERR_FILENO, newline);
		exit(98);
	}
	if (file_to == -1 || writE == -1)
	{
		dprintf(STDERR_FILENO, error99);
		dprintf(STDERR_FILENO, argv[2]);
		dprintf(STDERR_FILENO, newline);
		exit(99);
	}
	close_from = close(file_from);
	if (close_from == -1)
	{
		dprintf(STDERR_FILENO, error100);
		_putchar(file_from);
		dprintf(STDERR_FILENO, newline);
		exit(100);
	}
	else if (close_to == -1)
	{
		dprintf(STDERR_FILENO, error100);
		_putchar(file_to);
		dprintf(STDERR_FILENO, newline);
		exit(100);
	}
	return (0);
}

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
	int file_from, file_to, reaD, writE, close_from, close_to;
	char buffer[1024];
	mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_WRONLY | O_TRUNC);
	if (file_to == -1)
		file_to = open(argv[2], O_WRONLY | O_CREAT, mode);
	if (file_from == 3)
	{
		while ((reaD = read(file_from, buffer, 1024)) != 0)
			writE = write(file_to, buffer, reaD);
	}
	if (file_from == -1 || reaD == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1 || writE == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]), exit(99);
	}
	close_from = close(file_from);
	close_to = close(file_to);
	if (close_from == -1)
	{
		dprintf(2, "Error: Can't close %d\n", file_from), exit(100);
	}
	else if (close_to == -1)
	{
		dprintf(2, "Error: Can't close %d\n", file_to), exit(100);
	}
	return (0);
}

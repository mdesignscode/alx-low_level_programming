#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: the name of the file to be read.
 * @letters: the number of letters it should read and print
 *
 * Return: the actual number of letters it could read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_descriptor;
	ssize_t write_count, read_count;
	char *buffer;

	if (!filename)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);

	file_descriptor = open(filename, O_RDWR);
	if (file_descriptor == -1)
		return (0);

	read_count = read(file_descriptor, buffer, letters);
	if (read_count == -1)
		return (0);

	write_count = write(STDOUT_FILENO, buffer, read_count);
	if (write_count == -1 || read_count != write_count)
		return (0);

	free(buffer);

	close(file_descriptor);

	return (write_count);
}

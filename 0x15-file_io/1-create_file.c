#include "main.h"
/**
 * _strlen - counts the length of a string.
 * @s: string to be counted.
 *
 * Return: length of string.
 */
int _strlen(const char *s)
{
	int len = 0;

	while (s[len])
		len++;

	return (len);
}
/**
 * create_file - creates a file.
 * @filename: name of file to be created.
 * @text_content: a NULL terminated string to write to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int file_descriptor;
	size_t len;

	if (!filename)
		return (-1);

	file_descriptor = open(filename, O_RDONLY);

	len = _strlen(text_content);

	if (file_descriptor == 3)
		file_descriptor = open(filename, O_RDWR | O_TRUNC);
	else if (file_descriptor == -1)
		file_descriptor = open(filename, O_CREAT | O_RDWR, S_IWUSR | S_IRUSR);


	if (!!text_content)
		write(file_descriptor, text_content, len);

	close(file_descriptor);

	return (1);
}

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
 * append_text_to_file - appends text at the end of a file.
 * @filename: name of file to be created.
 * @text_content: a NULL terminated string to write to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_descriptor, writE;
	size_t len;

	len = _strlen(text_content);

	if (!filename || !text_content)
		return (-1);

	file_descriptor = open(filename, O_RDWR | O_APPEND);
	if (file_descriptor == 3)
		writE = write(file_descriptor, text_content, len);
	if (writE == -1)
		return (-1);

	if (file_descriptor == -1)
		return (-1);
	return (1);
}

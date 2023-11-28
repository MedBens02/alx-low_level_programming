#include "main.h"

/**
 * _strlen - len of a str
 *
 * @str: str
 *
 * Return: len
 */
int _strlen(char *str)
{
	int len;

	if (str == NULL)
		return (0);
	while (*str)
	{
		len++;
		str++;
	}
	return (len);
}

/**
 * append_text_to_file - appends text at the end of a file.
 *
 * @filename: name
 * @text_content: content
 *
 * Return: 1 success, 0 fail
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes = 0, l = _strlen(text_content);

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (l)
		bytes = write(fd, text_content, l);

	close(fd);
	if (bytes == l)
		return (1);
	else
		return (-1);
}

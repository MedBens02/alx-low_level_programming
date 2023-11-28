#include "main.h"

/**
 * read_textfile - reads a text file and prints it
 *
 * @filename: name of file
 * @letters: num of bytes to read
 *
 * Return: num of bytes read or printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t num;
	char buf[1024 * 8];

	if (filename == NULL || !letters)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	num = read(fd, &buf[0], letters);
	num = write(STDOUT_FILENO, &buf[0], num);
	close(fd);

	return (num);
}

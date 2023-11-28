#include "main.h"

#define USAGE "Usage: cp file_from file_to\n"
#define ER_NOREAD "Error: Can't read from file\n"
#define ER_NOWRITE "Error: Can't write to\n"
#define ER_NOCLOSE "Error: Can't close fd %d\n"
#define PERM (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH)
#define BUFFER_SIZE 1024

/**
 * error_exit - prints err msg and exits with code
 *
 * @msg: err msg to print
 * @filename: name
 * @exit_code: code to exit with
 */
void error_exit(const char *msg, const char *filename, int exit_code)
{
	dprintf(STDERR_FILENO, msg, filename);
	exit(exit_code);
}

/**
 * main - start pt
 *
 * @argc: num of args
 * @argv: vectores
 *
 * Return: success 1, 0 fail
 */
int main(int argc, char *argv[])
{
	int src_fd = 0, to_fd = 0;
	ssize_t bytes;
	char buf[BUFFER_SIZE];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]), exit (97);

	src_fd = open(argv[1], O_RDONLY);
	if (src_fd == -1)
		error_exit(ER_NOREAD, argv[1], 98);

	to_fd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, PERM);
	if (to_fd == -1)
		error_exit(ER_NOWRITE, argv[2], 99);

	while ((bytes = read(src_fd, buf, BUFFER_SIZE)) > 0)
		if (write(to_fd, buf, bytes) != bytes)
			error_exit(ER_NOWRITE, argv[2], 99);

	if (bytes == -1)
		error_exit(ER_NOREAD, argv[1], 98);

	src_fd = close(src_fd);
	to_fd = close(to_fd);

	if (src_fd)
		error_exit(ER_NOCLOSE, argv[1], 100);
	if (to_fd)
		error_exit(ER_NOCLOSE, argv[2], 100);

	return (0);
}

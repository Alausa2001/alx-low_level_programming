#include "main.h"
/**
 * main - this main function copies the first file on the
 * command line into the second just like cp command
 * @argc: no of command line arguments
 * @argv: gives the index of the argument
 * Return: 0 if successful
 */
int main(int argc, char *argv[])
{
	int fd_first, fd_second, char_read, char_written, closefirst, closesecond;
	char buf[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	fd_first = open(argv[1], O_RDONLY);
	if (fd_first == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), exit(98);
	fd_second = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (fd_second == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	char_read = read(fd_first, buf, 1024);
	while ((char_read = read(fd_first, buf, 1024)) > 0)
	{
		char_written = write(fd_second, buf, char_read);
		if (char_written != char_read)
			dprintf(STDERR_FILENO, "ERROR: Can't write to %s\n", argv[2]), exit(99);
	}
	if (char_read == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	closefirst = close(fd_first);
	if (closefirst == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_first), exit(100);
	closesecond = close(fd_second);
	if (closesecond != 0)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_second), exit(100);
	return (0);
}

#include <fcntl.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * read_textfile - Write a function that reads a text file
 * and prints it to the POSIX standard output
 * @filename: name of file
 * @letters: returns the actual number of letters it could read and print
 * Return: returns the actual number of letters it could read and print
 * if file cannot be open or read return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, char_read, char_to_write;
	char *buf;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDWR);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);
	char_read = read(fd, buf, letters);
	if (char_read == -1)
		return (0);
	char_to_write = write(STDOUT_FILENO, buf, char_read);
	if (char_to_write == -1)
		return (0);
	close(fd);
	free(buf);
	return (char_to_write);
}

#include "main.h"
#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
/**
 * create_file - Create a function that creates a file.
 * @filename: name of the file
 * @text_content:  is a NULL terminated string to write to the file
 * Return: 1 if successful else -1
 */
int create_file(const char *filename, char *text_content)
{
	int fd, txt_len, characters;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[txt_len] != NULL)
			txt_len++;
		characters = write(fd, text_content, txt_len);
		if (chars_written != str_len)
			return (-1);
	}
	close(fd);
	return (1);
}

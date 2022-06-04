#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include "main.h"
/**
 * append_text_to_file - this function appends a text to a file
 * @filename: name of file
 * @text_content: a null ending string containing the chars
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, txt_len, characters = 0;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_RDWR | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content)
	{
		for (txt_len = 0; text_content[txt_len] != '\0'; txt_len++)
			;
		characters = write(fd, text_content, txt_len);
		if (characters == -1)
			return (-1);
	}
	close(fd);
	return (1);
}

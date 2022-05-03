#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 * append_text_to_file - appends a file
 *
 * @filename: filename
 * @text_content: content
 *
 * Return: 1 or -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, n;


	if (!filename)
		return (-1);

	fd = open(filename,  O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (!text_content)
		return (-1);

	n = write(fd, text_content, strlen(text_content));

	close(fd);
	if (n == -1)
		return (-1);

	return (1);

}

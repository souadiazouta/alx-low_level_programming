#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 * create_file - creates a file
 *
 * @filename: filename
 * @text_content: content
 *
 * Return: 1 or -1
 */

int create_file(const char *filename, char *text_content)
{
	int fd, n;


	if (!filename)
		return (-1);

	if (!text_content)
		text_content = "";

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	n = write(fd, text_content, strlen(text_content));

	close(fd);
	if (n == -1)
		return (-1);

	return (1);

}

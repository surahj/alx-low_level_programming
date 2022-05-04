#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_file - creates a file
 * @filename: name of the file
 * @text_content: content of the file
 * Return: return 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, _write, i = 0, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
	{
		fd = open(filename, O_RDWR | O_CREAT);
		close(fd);
		return (1);
	}
	else 
	{
		while (text_content[i++])
			len++;
	}
	fd = open(filename, O_RDWR | O_CREAT);
	_write = write(fd, text_content, len);

	if (fd < 0 || _write < 0)
		return (-1);

	close(fd);
	return (1);
}

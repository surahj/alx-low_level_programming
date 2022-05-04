#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: pointer to file to read from
 * @letters: number of letter to read
 * Return: the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
	{
		char *str;
		ssize_t fd, _read, _write;

		if (filename == NULL)
			return (0);

		str = (char *)malloc(sizeof(char) * (letters));
		if (str == NULL)
			return (0);

		fd = open(filename, O_RDONLY);

		_read = read(fd, str, letters);

		_write = write(STDOUT_FILENO, str, _read);
		if (_write < 0 || fd < 0 || _read < 0)
		{
			free(str);
			return (0);
		}
		free(str);
		close(fd);
		return (_write);
	}

#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

/**
 *_strdup - copy string to newly allocated memory
 * @str: string to be copied
 * Return: a pointer  to newly allocated space
 */

char *_strdup(char *str)
{
	char *duplicate;
	int index, len = 0;

	if (str == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
		len++;

	duplicate = malloc(sizeof(char) * (len + 1));

	if (duplicate == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
		duplicate[index] = str[index];

	duplicate[len] = '\0';

	return (duplicate);
}


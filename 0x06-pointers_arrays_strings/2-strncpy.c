#include "main.h"

/**
 * _strncpy - it copies a string from source to destination
 * @src: source to copy from
 * @dest: destination to copy to
 * @n: number of bytes to be copie
 * Description: a function that copies a string.
 * Return: destination
 */

char *_strncpy(char *dest, char *src, int n)
{
	int j = 0, len_s = 0;

	while (src[j++])
		len_s++;

	for (j = 0; j < n && j < len_s; j++)
		dest[j] = src[j];

	for (; j < n; j++)
		dest[j] = '\0';
	return (dest);
}

#include "main.h"

/**
 * _strncat - that concatenates two strings
 * @dest: destination
 * @src: source
 * @n: number of bytes to concatenate with dest
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0, len_d = 0, len_s = 0;

	while (dest[i++])
		len_d++;

	while (src[j++])
		len_s++;

	for (j = 0; j < n && j < len_s; j++)
		dest[len_d++] = src[j];

	for (; j < n; j++)
		dest[len_d] = '\0';
	return (dest);
}

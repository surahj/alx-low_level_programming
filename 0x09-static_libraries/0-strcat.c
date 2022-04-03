#include "main.h"
/**
 * _strcat - it concatenate two strings
 * @dest: destination string
 * @src: source string
 * Return: a char of the concatenated string
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, len_d = 0, len_s = 0, j = 0;

	while (dest[i++])
		len_d++;
	while (src[j++])
		len_s++;

	for (i = 0; i <= len_s; i++)
	{
		*(dest + len_d + i) = *(src + i);
	}
	return (dest);
}

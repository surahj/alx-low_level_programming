/**
 * _strcat - it concatenate two strings
 * @dest: destination string
 * @src: source string
 * Return: a char of the concatenated string
 */

char *_strcat(char *dest, char *src)
{
	int i, len_d = 0;

	while (*dest++)
		len_d++;

	for (i = 0; src[i++]; i++)
	{
		*(dest + len_d + i) = *(src + i);
	}
	return (dest);
}

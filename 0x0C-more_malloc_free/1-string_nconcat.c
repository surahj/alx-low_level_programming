#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 * @n: number of bytes from sexond string
 * Return: a pointer point to a newly allocated
 * space in memory, which contains s1, followed
 * by the first n bytes of s2, and null terminated
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int len1 = n, i = 0, j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i++])
		len1++;

	ptr = malloc(sizeof(char) * (len1 + 1));

	if (ptr == NULL)
		return (NULL);

	j = 0;

	for (i = 0; s1[i]; i++)
		ptr[j++] = s1[i];

	for (i = 0; s2[i] && i < n; i++)
		ptr[j++] = s2[i];

	ptr[j] = '\0';
	return (ptr);
}


#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer point to a newly allocated space
 * in memory which contains the contents
 * of s1, followed by
 * the contents of s2, and null terminated
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0, j;
	char *str;
	int len = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (j = 0; s1[j] || s2[j]; j++)
		len++;

	str = malloc(sizeof(char) * len);
	if (str == NULL)
	{
		printf("Error\n");
		return (NULL);
	}

	for (j = 0; s1[j]; j++)
		str[i++] = s1[j];

	for (j = 0; s2[j]; j++)
	{
		str[i++] = s2[j];
	}
	return (str);
}

#include <stdio.h>
#include <string.h>

/**
 * main - return string
 * Return: 1 if the puts function is true
 */
int main(void)
{
	char str[100];

	strcpy(str, "\"Programming is like building a multilingual puzzle");

	puts(str);
	return (0);
}

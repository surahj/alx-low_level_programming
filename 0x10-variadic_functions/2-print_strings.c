#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings, followed by a new line
 * @separator: symbol to separate each string
 * @n: number of argument passed
 * Return: print strings
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		printf("%s", va_arg(ap, char*));

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(ap);
}

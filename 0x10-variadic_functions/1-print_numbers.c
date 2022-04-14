#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator - symbol to seperate number
 * @n: number of argumemt
 * Return: the printed number
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ptr;
	unsigned int i;

	va_start(ptr, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ptr, int));

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(ptr);
}

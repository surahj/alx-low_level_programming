#include "main.h"

/**
 * print_line - print line nth times
 * @n: number of times line will be printed
 * Return: 1 always
 */

void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		if (n <= 0)
			_putchar('\n');
		_putchar('_');
	}
	_putchar('\n');
}

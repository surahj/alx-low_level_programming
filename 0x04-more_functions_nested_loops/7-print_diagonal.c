#include "main.h"

/**
 * print_diagonal - print diagonal
 * @n: numner of times diagonal will be printed
 * return: 0 always
 */

void print_diagonal(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		if (n <= 0)
			_putchar('\n');

		_putchar('\\');
		_putchar(' ');
		_putchar('\n');
		_putchar('A');
	}
	_putchar('\n');
}

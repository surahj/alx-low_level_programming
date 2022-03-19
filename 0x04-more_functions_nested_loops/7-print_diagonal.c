#include "main.h"

/**
 * print_diagonal - print diagonal
 * @n: numner of times diagonal will be printed
 * return: 0 always
 */

void print_diagonal(int n)
{
	int len, space;

	if (n > 0)
	{
		for (len = 0; len < n; len++)
		{
			for (space = 0; space < len; space++)
				_putchar(' ');
			_putchar('\\');

			if (len == n - 1)
				continue;

			_putchar('\n');
<<<<<<< HEAD

		_putchar('\\');
		_putchar(' ');
		_putchar('\n');
		_putchar('A');
=======
		}
>>>>>>> 93e106453dc37e5338ac8f0d6903c92fdaa6d8ea
	}

	_putchar('\n');
}

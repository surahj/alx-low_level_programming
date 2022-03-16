#include "main.h"

/**
 * print_sign - print the sign of a number
 * @n: number to be check
 *
 * Description: prints + if n is greater than zero
 * prints 0 if n is zero
 * prints - if n is less than zero
 * Return: 1, 0 or -1
 */

int print_sign(int n)
{
	int res;

	if (n == 0)
	{
		_putchar('0');
		res = 0;
	}
	else if (n > 0)
	{
		_putchar('+');
		res = 1;
	}
	else
	{
		res = -1;
		_putchar('-');
	}
	return (res);
}

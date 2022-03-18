
#include "main.h"

/**
 * print_numbers - print number 0 to 9
 * Return: 1 always success
 */

void print_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}

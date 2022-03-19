#include "main.h"

/**
 * print_square - print square using '#'
 * @size: is the size of the square
 * Return: 1
 */

void print_square(int size)
{
	int len, i;

	if (size > 0)
	{
		for (len = 1; len <= size; len++)
		{
			for (i = 1; i <= size; i++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}

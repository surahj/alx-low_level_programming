#include "main.h"

/**
 * _abs - compute the absolut value of an integer
 * @n: integer to be check
 * Return: the absolute value
 */

int _abs(int n)
{
	int res;

	if (n == 0)
	{
		res = n;
	}
	else if (n < 0)
	{
		res = (-1 * n);
	}
	else
	{
		res = n;
	}
	return (res);
}

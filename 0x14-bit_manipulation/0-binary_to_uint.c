#include "main.h"
#include <stdio.h>

unsigned int binary_to_uint(const char *b);
unsigned int sqr(unsigned int n, unsigned int power);

/**
 * sqr - find the sqare of a number
 * @n: number to find its square
 * @power: power of number to be square
 * Return: the squared number
 */

unsigned int sqr(unsigned int n, unsigned int power)
{
	unsigned int s = 1, i;

	if (power == 0)
		return (1);

	for (i = 0; i < power; i++)
		s *= n;

	return (s);
}

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointing to a string of 0 and 1 chars
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, len = 0, uint = 0;

	if (b == NULL)
		return (0);
	while (b[i++])
	{
		len++;
	}
	for (i = 0; i < len; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		uint += ((b[i] - '0') * sqr(2, (len - i - 1)));
	}

	return (uint);
}

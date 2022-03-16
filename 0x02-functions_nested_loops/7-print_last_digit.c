#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: number to be check
 * Return: the value of the last digit
 */

int print_last_digit(int n)
{
	int res;

	res = _putchar((n % 10) + '0');
	return (res);
}

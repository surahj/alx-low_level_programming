#include "main.h"

/**
 * _islower - checks for lowercase character.
 * @c: accept any character
 * Return: 1 if true,0 otherwise
 */

int _islower(int c)
{
	char i;
	int result;

	for (i = 'a'; i <= 'z'; i++)
		if (c == i)
		{
			result = 1;
			break;
		}
		else
		{
			result = 0;
		}
	return result;
	_putchar('\n');
}

#include "main.h"

/**
 * _isalpha - check if input is alphabetic character
 * @c: input to be check
 *
 * Return: 1 if true, 0 otherwise
 */

int _isalpha(int c)
{
	int i;
	int result;

	for (i = 65; i <= 122; i++)
	{
		if (i == c)
		{
			if (i == 91 || i == 92 || i == 93 || i == 94 || i == 95 || i == 96)
				continue;

			result = 1;
			break;
		}
		else
		{
			result = 0;
		}
	}
	return (result);
	_putchar('\n');
}

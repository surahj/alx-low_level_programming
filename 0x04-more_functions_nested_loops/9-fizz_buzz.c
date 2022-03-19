#include <stdio.h>

/**
 * main - Entry point
 * Return: 0 Always
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && !(i % 5 == 0))
			printf("%s ", "Fizz");

		else if (i % 5 == 0 && !(i % 3 == 0))
			printf("%s ", "Buzz");

		else if (i % 3 == 0 && (i % 5 == 0))
			printf("%s ", "FizzBuzz");

		else
			printf("%d ", i);
	}
	printf("\n");
	return (0);
}

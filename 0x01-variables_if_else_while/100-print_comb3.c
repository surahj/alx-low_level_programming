#include <stdio.h>

/**
 *main - Entry point
 *Description: print combination of two number
 *Return: 0 end of the function
 */
int main(void)
{
	unsigned int i;
	unsigned int j;

	for (i = 0; i <= 9; i++)
	{
		for (j = i + 1; j <= 9; j++)
		{
			putchar(i);
			putchar(j);
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

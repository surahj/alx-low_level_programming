#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase
 * Return: Always 0
 */
int main(void)
{
	int letter;

	for (letter = 'a'; letter <= 'z'; letter++)
        {
                if (letter == 'q' || letter == 'e')
                        continue;
		putchar(letter);
        }

	putchar('\n');
	return (0);
}

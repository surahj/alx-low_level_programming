#include <stdlib.h>
#include <stdio.h>


/**
 * argstostr - concatenates all the arguments of my  program
 * @ac: argument count
 * @av: arguments passed
 * Return: a pointer to a new string, or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	char *ptr;
	int i = 0, j;
	int size = ac, index = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			size++;
	}
	ptr = (char *)malloc(sizeof(char) * (size + 1));
	if (ptr == NULL)
	{
		printf("error allocating height");
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			ptr[index++] = av[i][j];

		ptr[index++] = '\n';
	}
	ptr[size] = '\0';

	return (ptr);
}


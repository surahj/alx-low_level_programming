#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - that allocates memory using malloc
 * @b: size of the malloc
 * Return: a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	
		return ((int *)98);
	return (ptr);
}


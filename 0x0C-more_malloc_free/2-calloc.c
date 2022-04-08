#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: number of element of.the array
 * @size: size of each element of the array
 * Return: a pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	char *set_mem;
	unsigned int i;

	if (size == 0 || nmemb == 0)
		return (0);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	set_mem = ptr;

	for (i = 0; i < (nmemb * size); i++)
		set_mem[i] = '\0';

	return (ptr);
}

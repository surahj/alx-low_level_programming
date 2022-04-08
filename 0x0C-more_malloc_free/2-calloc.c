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

	if (size == 0 || nmemb == 0)
		return (0);

	ptr = malloc(nmemb * size);
	
	if (ptr == NULL)
		return (NULL);
	return (ptr);
}

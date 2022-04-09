#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: old pointer we are allocating a new memory
 * block for
 * @old_size: size of the old pointer
 * @new_size: size of the neww ponter
 * Return: a new pointer with the new address
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	char *copy_ptr;
	char *filler;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);

		if (new_ptr == NULL)
			return (NULL);

		free(ptr);
		return (new_ptr);
	}
	copy_ptr = ptr;

	new_ptr = malloc(sizeof(*copy_ptr) * new_size);

	if (new_ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	filler = new_ptr;

	for (i = 0; i < old_size && i < new_size; i++)
		filler[i] = copy_ptr[i];

	free(ptr);
	return (new_ptr);
}

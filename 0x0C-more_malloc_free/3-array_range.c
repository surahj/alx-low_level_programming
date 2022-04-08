#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum value of the array
 * @max: max vavue of the array
 * Return: the pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *ptr;
	int i;

	if (min > max)
		return (NULL);

	ptr = malloc(sizeof(int) * (max - min) + 1);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i <= (max - min); i++)
		ptr[i] = min++;
	return (ptr);
}

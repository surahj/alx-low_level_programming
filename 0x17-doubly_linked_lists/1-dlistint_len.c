#include "lists.h"
/**
 * print_dlistint - prints all the
 * elements of a dlistint_t list
 * @h: pointer to first node of the list
 * Return: number of node in the list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}

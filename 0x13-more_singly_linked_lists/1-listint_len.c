#include "lists.h"
#include <stdio.h>

/**
 * listint_len - prints all the elements of a listint_t list
 * @h: point to the first node
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}

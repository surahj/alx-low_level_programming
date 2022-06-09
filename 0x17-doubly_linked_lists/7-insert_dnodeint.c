#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new
 * node at a given position
 * @h: pointer to first node of the list
 * @idx: index to insert a new node
 * @n: value of data to add
 * Return: the address of the new node,
 * or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = *h, *new_node;
	unsigned int i = 0;

	if (idx == 0)
		return (add_dnodeint(h, n));

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	while (temp)
	{
		if (i++ == idx)
		{
			new_node->next = temp->next;
			temp->next = new_node;
			new_node->prev = temp;
			temp->next->prev = new_node;
			break;
		}
		temp = temp->next;
	}
	if (idx > i)
		return (NULL);

	return (new_node);
}

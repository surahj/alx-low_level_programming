#include "lists.h"

/**
 * get_dnodeint_at_index - returns the
 * nth node of a dlistint_t linked list
 * @head: pinter to first node
 * @index: index of node to return
 * Return: nth node of a dlistint_t linked list
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int counter = 0;

	if (head == NULL)
		return (NULL);

	while (head->next != NULL)
	{
		if (index == counter)
			break;

		counter++;
		head = head->next;
	}
	return (head);
}

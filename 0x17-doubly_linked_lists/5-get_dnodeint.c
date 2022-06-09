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
	dlistint_t *temp = head;
	unsigned int counter = 0;

	if (temp == NULL)
		return (NULL);

	while (temp->next != NULL)
	{
		if (index == counter)
		{
			return (temp);
		}
		counter++;
		temp = temp->next;
	}
	return (NULL);
}

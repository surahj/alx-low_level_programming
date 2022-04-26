#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node
 * at index index of a listint_t linked list
 * @head: point to first node of.the.list
 * @index: index of the node that should be
 * deleted. Index starts at 0
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *holder, *temp = *head;
	unsigned int i;

	if (head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	for (i = 0; i < index - 1; i++)
	{
		if (temp->next == NULL)
			return (-1);

		temp = temp->next;
	}

	holder = temp->next;
	temp->next = holder->next;
	free(holder);
	return (1);
}

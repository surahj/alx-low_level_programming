#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: point to first node
 * @idx: index of the list where the new node
 * should be added. Index starts at 0
 * @n: data of the new node
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new_node, *temp;

	new_node = (listint_t *)malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	temp = *head;

	if (idx == 0)
	{
		new_node->next = *head;
		(*head) = new_node;
		return (new_node);
	}

	for (i = 0; i < idx - 1; i++)
	{
		if (temp == NULL || temp->next == NULL)
			return (NULL);

		temp = temp->next;
	}

	new_node->next = temp->next;
	temp->next = new_node;

	return (new_node);
}

#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: - pointer to first node of the list
 * Return: Nothing
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head;
		free(head);
		head = temp->next;
	}
}

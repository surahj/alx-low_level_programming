#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: point to the first node
 * Return: head node’s data
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (*head == NULL)
		return (0);

	temp = *head;

	n = (*head)->n;

	*head = (*head)->next;

	free(temp);

	return (n);
}

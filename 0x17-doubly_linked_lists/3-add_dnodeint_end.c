#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at
 * the end of a list
 * @head: pointer to first nodeof the list
 * @n: value of a node
 * Return: the address of the new element,
 * or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tail, *new_node;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;

	if (head == NULL || *head == NULL)
	{
		(*head)  = new_node;
		(*head)->prev = NULL;
		return (new_node);
	}

	tail = *head;

	while (tail->next != NULL)
		tail = tail->next;

	new_node->prev = tail;
	tail->next = new_node;

	return (new_node);
}

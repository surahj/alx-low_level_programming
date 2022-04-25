#include <stdlib.h>
#include "lists.h"
/**
 * *add_nodeint - adds a new node at the
 * beginning of a listint_t list
 * @head: pointer that point to pointer of the address
 * of the first node
 * @n: data to add to new node
 * Return: the address of the new added node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = (listint_t *)malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	new_node->next = *head;

	*head = new_node;

	return (new_node);
}

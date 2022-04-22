#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_eend - adds a new node at the beginning of a list_t list
 * @head: pointer to pointer of the head
 * @str: string to add
 * Return: address of the new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp;
	unsigned int str_len = 0, i = 0;

	while (str[i++])
		str_len++;

	new_node = (list_t *)malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	new_node->len = str_len;

	new_node->next = *head;
	*head = new_node;

	return (new_node);
}

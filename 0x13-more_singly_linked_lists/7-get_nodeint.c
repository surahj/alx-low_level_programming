#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: pointing to first node
 * @index: index of the node, starting at 0
 * Return: nth node of a linked list
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int i = 1;

	if (index == 0)
		return (head);

	while (head)
	{
		if (i == index)
		{
			temp = head->next;
			head = temp;
			break;
		}

		head = head->next;
		i++;
	}
	if (index > i)
		return (NULL);

	return (temp);
}

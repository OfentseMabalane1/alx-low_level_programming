#include "lists.h"

/**
 * get_nodeint_at_index - get node at given index
 * @head: entry node into linked list
 * @index: position of node to return
 * Return:node, NULL on fail
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t n;

	for (n = 0; (n < index) && (head->next); n++)
		head = head->next;

	if (n < index)
		return (NULL);

	return (head);
}

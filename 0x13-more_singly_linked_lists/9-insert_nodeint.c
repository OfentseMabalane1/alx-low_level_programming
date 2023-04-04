#include "lists.h"

/**
 * insert_nodeint_at_index - adds a new node to a linked list
 *                           at a given position
 * @head: pointer to the head of the list
 * @idx: index of the list where the new node will be added
 *       (indices start at 0)
 * @n: value for the new node to be added
 * Return: node, NULL on fail
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *next = *head, *node;

	node = malloc(sizeof(listint_t));
	if (!node)
		return (NULL);

	node->n = n;

	if (!idx)
	{
		node->next = *head;
		*head = node;
		return (node);
	}
	while (idx > 1)
	{
		if (!next)
			return (NULL);

		idx--;
		next = next->next;
	}
	node->next = next->next;
	next->next = node;
	return (node);
}

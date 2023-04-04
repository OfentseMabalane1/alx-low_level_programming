#include "lists.h"

/**
 * add_nodeint_end - add a node to the end of a linked list
 * @head: last node in linked list
 * @n: value to append to node
 *
 * Return: pointer to new node, NULL on fail
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *dup;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	dup = *head;
	if (dup == NULL)
		*head = new;
	else
	{
		while (dup->next != NULL)
		{
			dup = dup->next;
		}
		dup->next = new;
	}
	return (new);
}

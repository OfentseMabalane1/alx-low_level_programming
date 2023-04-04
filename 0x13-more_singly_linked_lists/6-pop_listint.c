#include "lists.h"

/**
 * pop_listint - deletes the head node
 * @head : pointer to the head of the linked list
 * Return: head node's data (n)
 *         or 0 - if the linked list is empty
 */

int pop_listint(listint_t **head)
{
	int res;
	listint_t *pop;

	if (!*head)
		return (0);

	pop = *head;
	res = pop->n;
	*head = pop->next;

	free(pop);

	return (res);
}

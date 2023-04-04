#include "lists.h"

/**
 * sum_listint - calculates the sum of all the data (n) of a linked list
 * @head : pointer to the head of the list
 * Return: sum of all the data (n),
 *         or 0 - if the list is empty
 */

int sum_listint(listint_t *head)
{
	listint_t *node = head;
	int res = 0;

	while (node)
	{
		res += node->n;
		node = node->next;
	}
	return (res);
}

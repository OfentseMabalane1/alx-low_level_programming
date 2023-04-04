#include "lists.h"

/**
 * listint_len - the length of linked list
 * @h: The list
 * Return: the number of node
 */

size_t listint_len(const listint_t *h)
{
	size_t res = 0;

	while (h)
	{
		res++;
		h = h->next;
	}
	return (res);
}

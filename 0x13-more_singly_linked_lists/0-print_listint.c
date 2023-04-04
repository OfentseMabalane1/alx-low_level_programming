#include "lists.h"

/**
 * a function that prints all the elements of a listint_t list.
 * Return: the number of nodes
 * Prototype: size_t print_listint(const listint_t *h);
 */

size_t print_listint(const listint_t *h)
{
	size_t res = 0;

	while (h)
	{
		printf("%d\n", h->n);
		res++;
		h = h->next;
	}

	return (res);
}


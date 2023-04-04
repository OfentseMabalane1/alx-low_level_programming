#include "lists.h"

/**
 * print_listint - print integer
 * listint_t linked list
 * @h: element contaning the list
 * Return: the node of the linked list
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


#include "lists.h"

/**
 * add_nodeint -add node to begining of linked list
 * @head: first node in linked list
 * @n: value append to node
 * Return: pointer to new head, null if failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	int a;
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	a = n;

	new->n = a;
	new->next = *head;
	*head = new;
	return (new);
}

#include "lists.h"
/**
 * free_listint - fee linked list
 * @head: the pointer to the linked list
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *next;

	while (head)
	{
		next = head->next;
		free(head);
		head = next;
	}
}

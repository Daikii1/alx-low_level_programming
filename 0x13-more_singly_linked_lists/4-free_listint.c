#include "lists.h"

/**
 * free_listint - free the linked list.
 * @head: head of the list.
 * Return: Void.
 */
void free_listint(listint_t *head)
{
	listint_t *tp;

	while ((tp = head) != NULL)
	{
		head = head->next;
		free(tp);
	}
}

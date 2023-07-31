#include "lists.h"

/**
 * sum_listint - returns the sum of all the data n of
 * the linked list.
 * @head: head of a list.
 * Return: sum of elemts.
 */
int sum_listint(listint_t *head)
{
	int Sm;

	Sm = 0;
	while (head != NULL)
	{
		Sm += head->n;
		head = head->next;
	}

	return (Sm);
}

#include "lists.h"

/**
 * add_nodeint - add a new node at the beginning
 * of a the linked list
 * @head: head of the list.
 * @n: n element.
 *
 * Return: pointer of the new element. NUll if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nw;

	nw = malloc(sizeof(listint_t));

	if (nw == NULL)
		return (NULL);

	nw->n = n;
	nw->next = *head;
	*head = nw;

	return (*head);
}

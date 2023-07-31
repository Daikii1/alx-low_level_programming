#include "lists.h"
/**
 * add_nodeint_end - add a node to the end of the list
 *  @head: pointer to the start list
 *  @n: New Pointer
 *  Return: pointr of the new element
 **/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *tp, *nw;

	tp = *head;
	nw = malloc(sizeof(listint_t));
	if (nw == NULL)
		return (NULL);
	nw->n = n;
	if (*head == NULL)
	{
		*head = nw;
		return (*head);
	}
	while (tp->next != NULL)
		tp = tp->next;
	tp->next = nw;
	return (nw);
}

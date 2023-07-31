#include "lists.h"
/**
 * free_listint2 - free a list and set The heaed to null
 * @head:  adresse to the start of the string
 */
void free_listint2(listint_t **head)
{
	listint_t *c, *nx;

	if (head == NULL)
		return;
	c = *head;
	while (c)
	{
		nx = c->nx;
		free(c);
		c = nx;
	}
	*head = NULL;
}

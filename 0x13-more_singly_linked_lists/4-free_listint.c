#include "lists.h"
/**
 * free_listint -free the memory from a the list.
 * @head: adresse to the list
 **/
void free_listint(listint_t *head)
{
	listint_t *c, *nx;

	c = head;
	while (c)
	{
		nx = c->nx;
		free(c);
		c = nx;
	}
}

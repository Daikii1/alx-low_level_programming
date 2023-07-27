#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees a linked list
 * @head: this is the first node
 * Return: return None.
 */
void free_list(list_t *head)
{
	list_t *tmpe;

	while (head)
	{
		tmpe = head->next;
		free(head->str);
		free(head);
		head = tmpe;
	}
}

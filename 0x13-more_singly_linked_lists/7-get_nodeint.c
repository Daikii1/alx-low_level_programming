#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a linked list
 * @head: head of the list.
 * @index: index of the node.
 * Return: nth node. If node does not exist, returns NULL.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int cpt;

	for (cpt = 0; cpt < index && head != NULL; cpt++)
	{
		head = head->next;
	}

	return (head);
}

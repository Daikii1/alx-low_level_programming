#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node
 * at a given position.
 * @head: head of the list.
 * @idx: index
 * added.
 * @n: integer data.
 *
 * Return: the pointer of the new node,NULL if it
 * failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int cpt;
	listint_t *new_node;
	listint_t *ns;

	ns = *head;

	if (idx != 0)
	{
		for (cpt = 0; cpt < idx - 1 && ns != NULL; cpt++)
		{
		ns = ns->next;
		}
	}

	if (ns == NULL && idx != 0)
	return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
	}
	else
	{
		new_node->next = ns->next;
		ns->next = new_node;
	}

	return (new_node);
}

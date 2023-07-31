#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list and returns its value
 * @head: pointer to pointer to the head node of the list.
 * Return: value of the deleted node.
 */
int pop_listint(listint_t **head)
{
	listint_t *node, *PT;
	int val;

	if (head == NULL || *head == NULL)
		return (0);

	PT = *head;
	node = (*head)->next;
	val = PT->n;
	free(PT);
	*head = node;

	return (val);
}

#include "lists.h"

/**
 * listint_len -its a function that returns
 * the number of elementsin a linked list
 * @h: adresse to the first element.
 * Return: number of elements.
 */
size_t listint_len(const listint_t *h)
{
	size_t cpt = 0;

	while (h)
	{
		h = h->next;
		cpt++;
	}
	return (cpt);
}

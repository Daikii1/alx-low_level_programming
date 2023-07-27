#include <stdio.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: the linked list
 * Return: The Number of the elements
 */

size_t list_len(const list_t *h)
{
	size_t elNum = 0;

	while (h != NULL)
	{
		elNum++;
		h = h->next;
	}

	return (elNum);
}

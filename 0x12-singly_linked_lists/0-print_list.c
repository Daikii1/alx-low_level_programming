#include <stdio.h>
#include "lists.h"
/**
 * print_list - a fucntion that prints all the elements of a list_t list
 * @h: list_t list
 * Return: number of elemnt
 */
size_t print_list(const list_t *h)
{
	size_t nodecpt = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		h = h->next;
		nodecpt++;

	}
	return (nodecpt);
}


#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 * add_node_end - adds a new node at the end
 * of a list_t list.
 * @head: this the head of the linked list.
 * @str: str to store in the list.
 * Return: point of the head.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNd, *temp;
	size_t nchar;

	newNd = malloc(sizeof(list_t));
	if (newNd == NULL)
		return (NULL);

	newNd->str = strdup(str);

	for (nchar = 0; str[nchar]; nchar++)
		;

	newNd->len = nchar;
	newNd->next = NULL;
	temp = *head;

	if (temp == NULL)
	{
		*head = newNd;
	}
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = newNd;
	}

	return (*head);
}

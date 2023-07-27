#include <string.h>
#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * add_node - to adds a new node at the start
 * of a list_t list.
 * @head: the head of the linked list
 * @str: string to store in the list
 * Return: the pointe of the head.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newNd;
	size_t nchar;

	newNd = malloc(sizeof(list_t));
	if (newNd == NULL)
		return (NULL);

	newNd->str = strdup(str);

	for (nchar = 0; str[nchar]; nchar++)
		;

	newNd->len = nchar;
	newNd->next = *head;
	*head = newNd;

	return (*head);
}

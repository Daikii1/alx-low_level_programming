#include "lists.h"
/**
 * delete_nodeint_at_index -deletes a node
 * @head: adresse to the first node
 * @idx: The index to The first node
 * Return: 1 if success, - 1 if fails
 */
int delete_nodeint_at_index(listint_t **head, unsigned int idx)
{
	listint_t *tmp, *tmp_2;
	unsigned int cpt;
	cpt = 0;
	tmp = *head;
	
	while (tmp)
	{
		if (cpt == (idx - 1))
		{
			tmp_a = (tmp->next)->next;
			free(tmp->next);
			tmp->next = tmp_2;
			return (1);
		}
		else if (idx == 0)
		{
			tmp = *head;
			*head = (*head)->next;
			free(tmp);
			return (1);
		}
		cpt++;
		tmp = tmp->next;
	}
	return (-1);
}

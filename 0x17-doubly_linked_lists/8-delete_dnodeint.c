#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node at
 * index
 * @head: starting point
 * @index: node to be deleted
 * Return: 1 if succeeded, -1 if failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = *head;
	dlistint_t *p = NULL;
	dlistint_t *remove = NULL;
	unsigned int y = 1;

	while (index > y)
	{
		tmp = tmp->next;
		y++;
	}
	if (tmp == NULL)
		return (-1);
	if (tmp == *head)
	{
		remove = tmp;
		tmp = tmp->next;
		*head = tmp;
		if (tmp != NULL)
			tmp->prev = NULL;
	}
	else if (tmp->next->next == NULL)
	{
		tmp->next->prev = NULL;
		remove = tmp->next;
		tmp->next = NULL;
	}
	else
	{
		remove = tmp->next;
		p = tmp->next->next;
		tmp->next->next = NULL;
		tmp->next->prev = NUll;
		tmp->next = p;
		p->prev = tmp;
	}
	free(remove);
	return (1);
}

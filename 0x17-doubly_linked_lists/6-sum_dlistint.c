#include "lists.h"

/**
 * sum_dlistint - sum all the data of a list
 * @head: input
 * Return: sum of list
 */

int sum_dlistint(dlistint_t *head)
{
	int x = 0;
	dlistint_t *tmp = head;

	while (tmp != NULL)
	{
		x += tmp->n;
		tmp = tmp->next;
	}
	return (x);
}

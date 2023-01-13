#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node
 * @head: input
 * @index: node number
 * Return: index node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int x = 0;
	dlistint_t *tmp = head;

	while (index > x)
	{
		tmp = tmp->next;
		x++;
	}
	return (tmp);
}

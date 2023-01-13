#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts node at any given
 * position
 * @h: input
 * @idx: index to insert node
 * @n: value of int
 * Return: list insert node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp = *h;
	dlistint_t *new;
	unsigned int x = 1;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	while (idx > x)
	{
		tmp = tmp->next;
		x++;
	}
	new->next = tmp->next;
	new->prev = tmp;
	tmp->next->prev = new;
	tmp->next = new;
	return (tmp);
}

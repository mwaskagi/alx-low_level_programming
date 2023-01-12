#include "lists.h"

/**
 * print_dlistint - print all elements of list
 * @h: input node
 * Return: node
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}

#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node
 * of list
 * @head: pointer
 * @index: number of index list
 * Return: node index
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a = 0;
	listint_t *node_index = head;

	if (head == NULL)
		return (0);

	while (a < index)
	{
		if (head == NULL)
			return (NULL);
		node_index = head->next;
		head = node_index;
		a++;
	}
	return (node_index);
}

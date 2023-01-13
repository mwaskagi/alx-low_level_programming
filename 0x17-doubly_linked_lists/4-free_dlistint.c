#include "lists.h"

/**
 * free_dlistint - free a dlistint_t
 * @head: input
 * Return: 0
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = head;

	while (head != NULL)
	{
		head = head->next;
		free(tmp);
		tmp = head;
	}
	free(head);
}

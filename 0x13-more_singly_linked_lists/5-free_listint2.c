#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - functions that frees the memory
 * of a list
 * @head: pointer
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (!(head && *head))
		return;
	while (*head != NULL)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
}

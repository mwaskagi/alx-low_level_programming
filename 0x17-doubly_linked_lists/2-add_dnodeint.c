#include "lists.h"

/**
 * add_dnodeint - adds new node
 * @head: pointer to head
 * @n: integer
 *
 * Return: if fails NUll else address to new node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *pointer;

	pointer = malloc(sizeof(dlistint_t));
	if (pointer == NULL)
		return (NULL);
	
	pointer->n = n;
	pointer->prev = NULL;
	pointer->next = *head;
	if (*head != NULL)
		(*head)->prev = pointer;
	*head = pointer;

	return (pointer);
}

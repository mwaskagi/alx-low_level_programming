#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * _strlen - return the lenght of string
 * @s: string
 * Return: length
 */

int _strlen(const char *s)
{
	int a = 0;

	while (s[a] != '\0')
	{
		a++;
	}
	return (a);
}

/**
 * add_node - add new node at the begining of list
 * @head: head of list
 * @str: value
 * Return: number of nodes
 */

list_t *add_node(list_t **head, const char *str)
{
	list *add;

	add = malloc(sizeof(list_t));
	if (add == NULL)
		return (NULL);
	add->str = strdup(str);

	add->len = _strlen(str);
	add->next = *head;
	*head = add;

	return (add);
}

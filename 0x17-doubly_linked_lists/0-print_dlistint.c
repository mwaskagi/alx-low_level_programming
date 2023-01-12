#incluce "lists.h"

/**
 * print_dlistint - print all elements of list
 * @h: input node
 * Return: node
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *pointer = h;
	size_t i = 0;

	while (pointer)
	{
		printf("%d\n", pointer->n);
		pointer = pointer->next;
		i++;
	}
	return (i);
}

#include "lists.h"
#include <stdio.h>

/**
 * print_listint -> prints all element of listint_t list
 * @h:head of a list
 * Return: numbers of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes;
	}
	return (nodes);
}

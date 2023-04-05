#include "lists.h"

/**
 * print_listint -> prints all the elemnts of a listint_t list.
 * @h: head of nodes
 * Return: the number of nodes
 *
 */
size_t print_listint(const listint_t *h)
{
	size_t count;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}

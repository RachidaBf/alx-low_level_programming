#include "lists.h"
/**
 * listint_len ->  returns the number of elements in a linked list.
 * @h: head of list
 * Return: number of element in a list
 */
size_t listint_len(const listint_t *h)
{
	size_t l;

	while (h != NULL)
	{
		h = h->next;
		l++;
	}
	return (l);
}

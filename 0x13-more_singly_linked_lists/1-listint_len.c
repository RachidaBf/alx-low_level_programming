#include "lists.h"
/**
 * listint_len ->  returns the number of elements in listint_t list.
 * @h: head of list
 * Return: number of element in listint_t list
 */
size_t listint_len(const listint_t *h)
{
	size_t l;

	while (h != NULL)
	{
		l++;
		h = h->next;
	}
	return (l);
}

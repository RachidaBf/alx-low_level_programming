#include "lists.h"

/**
 * insert_nodeint_at_index -> inserts a new node at a given position
 * @head: pointer to the head of the linked listint_t list
 * @idx: index of the list for the new node to added (indices start at 0)
 * @n: integer for the new node to be added
 * Return: address of the new node or NULL if function fails
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *T = *head;
	unsigned int node;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = T;
		*head = new;
		return (new);
	}

	for (node = 0; node < (idx - 1); node++)
	{
		if (T == NULL || T->next == NULL)
			return (NULL);
		T = T->next;
	}

	new->next = T->next;
	T->next = new;

	return (new);
}


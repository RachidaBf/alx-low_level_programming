#include "lists.h"

/**
 * delete_nodeint_at_index -> deletes the node at index index of a linked list
 * @head: pointer to the head
 * @index: index of the node to be deleted (indices start at 0)
 * Return: 1 if function succeeds, -1 if it fails
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *T, *node
	unsigned int count;

	T = *head;
	if (head == NULL || *head == NULL)
		return (-1);
	for (i = 0; i < index - 1 && T != NULL && index != 0; i++)
		T = T->next;
	if (T == NULL)
		return (-1);
	if (index == 0)
	{
		node = T->next;
		free(T);
		*head = node;
	}
	else
	{
		if (T->next == NULL)
			node = T->next;
		else
			node = T->next->next;
		free(T->next);
		T->next = node;
	}
	return (1);
}

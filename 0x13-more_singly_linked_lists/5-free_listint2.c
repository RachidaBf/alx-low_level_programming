#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - function that frees the listint_t list
 * @head:a double pointer of the list
 */
void free_listint2(listint_t **head)
{
	if (head == NULL)
		return;
	listint_t *current = *head;

	while (current != NULL)
	{
		listint_t *temp = current;

		current = current->next;
		free(temp);
	}
	*head = NULL;
}

#include "lists.h"

/**
 * free_listint2 - frees linked list and set head to null
 * @head: linked list to be freed
 * void
 */

void free_listint2(listint_t **head)
{
	if (*head)
	{
		free(*head->n);
		free(*head);
		*head = head->next;
	}
	*head = NULL;
}

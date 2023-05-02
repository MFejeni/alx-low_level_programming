#include "lists.h"

/**
 * free_listint - frees the memory used by linked list
 * @head: linked list to free its memory
 * void
 */

void free_listint(listint_t *head)
{
	if (head)
	{
		free(head->n);
		free(head->next);
		head = head-next;
	}
}

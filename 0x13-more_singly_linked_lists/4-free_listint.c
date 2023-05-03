#include "lists.h"

/**
 * free_listint - frees the memory used by linked list
 * @head: linked list to free its memory
 * void
 */

void free_listint(listint_t *head)
{
	listint_t *tmp_head;
	while (head)
	{
		tmp_head = head;
		head = head->next;
		free(tmp_head);
	}
}

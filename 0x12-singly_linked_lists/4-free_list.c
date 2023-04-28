#include "lists.h"
#include <stdlib.h>

/**
 * free_list - free the memory used by linked list
 * @head: list to be freed
 * void
 */

void free_list(list_t *head)
{
	while(head != NULL)
	{
		free(head->str);
		free(head);
		head = head->next;
	}
	free(head);
}

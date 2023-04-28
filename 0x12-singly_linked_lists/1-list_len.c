#include "lists.h"

/**
 * list_len - determines the number of elements in the linked list given
 * @h: linked list to determine its size
 * Return: the number of elements in the list
 */

size_t list_len(const list_t *h)
{
	if (h->next == NULL)
		return (0);
	else
		return (1 + list_len(h->next));
}

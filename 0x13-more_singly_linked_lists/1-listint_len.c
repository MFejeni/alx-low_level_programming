#include "lists.h"

/**
 * listint_len - determines the number of elements in the linked list
 * @h: linked list to determine its size
 * Return: the number of elements
 */

size_t listint_len(const listint_t *h)
{
	if (!h)
	{
		return (0);
	}
	else
	{
		h = h->next;
		return (1 + listint_len(h));
	}
}

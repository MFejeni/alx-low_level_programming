#include "lists.h"
#include <stdio.h>

/**
 * print_listint - print the elements of the linked lists
 * @h: list to print from
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	if (h)
	{
		printf("%i", h->n);
		h = n->next;
	}
	return (1 + print_listint(*h));
}

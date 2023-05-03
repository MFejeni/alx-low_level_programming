#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint - print the elements of the linked lists
 * @h: list to print from
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t size;

	size = 0;
	while (h)
	{
		printf("%i\n", h->n);
		h = h->next;
		size += 1;
	}

	return (size);
}

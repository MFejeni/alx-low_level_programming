#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints linked list given as argument
 * @h: linked list to be printed
 * Return: number of items in the list
 */

size_t print_list(const list_t *h)
{
	if (h->str == NULL)
		printf("[0] (nil)");
	else if (h->str)
		printf("[%u] %s", h->len, h->str);
	return (1 + print_list(h->next));
}

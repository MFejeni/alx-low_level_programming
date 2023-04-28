#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints linked list given as argument
 * @h: linked list to be printed
 * Return: number of items in the list
 */

size_t print_list(const list_t *h)
{
	int el_num = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0} (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		el_num += 1;
		h = h->next;
	}
	return (el_num);
}

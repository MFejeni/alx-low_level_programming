#include "lists.h"

/**
 * get_nodeint_at_index - gets the node at index given
 * @head: to get node from linked list
 * @index: index given to get the node
 * Return: node of the index if it exits, NULL otherwise
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int num;

	num = 0;
	if (num == index)
		return (head);
	if (num > index)
		return (NULL);
	num++;
	return (*head->next, index);
}

#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a node at a linked list given
 * @head: linked list to insert in
 * @idx: index of where the node should be inserted
 * @n: data of the node to insert
 * Return: NULL if it fails to insert, or address of new node otherwise
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int num;
	listint_t *node;
	listint_t *h;

	h = *head;
	num = 0;
	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	while (h != NULL)
	{
		if (num > idx)
			return (NULL);
		if (num == idx)
		{
			node->n = n;
			h->next = node;
			node->next = h->next;
		}
		h = h->next;
		num++;
	}
	return (node);
}

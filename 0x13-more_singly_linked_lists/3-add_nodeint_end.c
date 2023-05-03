#include "lists.h"

/**
 * add_nodeint_end - adds a given node at the end
 * @head: linked list to add to
 * @n: data of a node
 * Return: NULL if it fails, address of new node otherwise
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *to_add;

	while (head)
		*head = *head->next;
	if (!head)
	{
		to_add = malloc(sizeof(struct listint_s));
		if (to_add == NULL)
			return (NULL);
		to_add->n = n;
		*head = to_add;
	}
	return (*head);
}

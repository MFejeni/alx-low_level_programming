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
	listint_t *tmp_node;

	tmp_node = *head;
	to_add = malloc(sizeof(struct listint_s));
	if (to_add == NULL)
		return (NULL);

	to_add->n = n;
	to_add->next = NULL;

	if (*head == NULL)
	{
		*head = to_add;
		return (to_add);
	}

	while (tmp_node->next != NULL)
		tmp_node = tmp_node->next;
	tmp_node->next = to_add;
	return (to_add);
}

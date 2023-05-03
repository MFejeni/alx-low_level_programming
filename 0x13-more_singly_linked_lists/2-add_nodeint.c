#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - adds a node at the begining of the linked list
 * @head: linked list to add node to
 * @n: n of the node to be added
 * Return: NULL if it fails, address of the new node otherwise
 */

listint_t *add_nodeint(listint_t **head,  const int n)
{
	listint_t *to_add;

	to_add = malloc(sizeof(listint_t));
	if (to_add == NULL)
		return (NULL);
	to_add->n = n;
	to_add->next = *head;
	*head = to_add;
	return (*head);
}

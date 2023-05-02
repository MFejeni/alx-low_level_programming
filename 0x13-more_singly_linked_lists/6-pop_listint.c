#include "lists.h"

/**
* pop_listint - deletes the head node of a linked list
* @head: list to delete from
* Return: heads n, 0 if linked list empty
*/

int pop_listint(listint_t **head)
{
	int n;
	listint_t *node;

	if (head == NULL)
		return (0);

	node = *head;
	n = (*head)->n;
	*head = (*head)->next;
	free(node);
	return (n);
}

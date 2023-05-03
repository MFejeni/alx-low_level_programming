#include "lists.h"

/**
* reverse_listint - reverses a linked list given
* @head: list to be reversed
* Return: NULL if fails, new linked list otherwise
*/

listint_t *reverse_listint(listint_t **head)
{
	listint_t *new_node, tmp_node;

	if (*head == NULL || (*head)->next == NULL)
		return (*head);
	new_node = *head;
	tmp_node = (*head)->next;

	while (tmp_node != NULL)
	{
		(*head)->next = tmp_node->next;
		tmp_node->next = new_node;
		new_node = tmp_node;
		tmp_node = (*head)->next;
	}
	*head = new_node;

	return (*head);
}

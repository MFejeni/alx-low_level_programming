#include "lists.h"
#include <string.h>

/**
 * add_node - adds a node at the begining of the linked list
 * @head: head of the list to be added in
 * @str: string of a node to be added
 * Return: address of the newly list with added node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int new_len;

	new_len = 0;
	while (str[new_len] != '\0')
		new_len++;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = new_len;
	new->next = *head;
	*head = new;
	return (*head);
}

#include "lists.h"
#include <string.h>

/**
 * add_node_end - adds a node at the end of a linked list
 * @head: head of a list to be added to
 * @str: string of the element to be added
 * Return: NULL if it fails, address of new linked list otherwise
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	unsigned int new_len;

	new_len = 0;
	while (str[new_len] != '\0')
		new_len++;
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	while (*head->next != NULL)
		*head = head->next;
	new->str = strdup(str);
	new->len = new_len;
	*head->next = new;
	return (*head);
}

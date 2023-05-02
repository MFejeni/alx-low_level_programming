#include "lists.h"

/**
 * sum_listint - sums all data in the linked list
 * @head: linked list given to sum
 * Return; 0 if empty, sum of all elements otherwise
 */

int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	if (!head)
		return (sum);
	else
	{
		sum += head->n;
		*head = *head->next;
		sum_listint(*head);
	}
}

#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - function that frees list
 *
 * @head: head list.
 */

void free_listint2(listint_t **head)
{
	listint_t *str;


	if (head == NULL)
	{
		return;
	}
	while (*head)
	{
		str = *head;
		*head = (*head)->next;
		free(str);
	}
	*head = NULL;
}

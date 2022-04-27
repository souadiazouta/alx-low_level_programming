#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - function that frees a list
 *
 * @head: head of list
 *
 */

void free_listint(listint_t *head)
{
	listint_t *str;


	while (head)
	{
		str = head;
		head = head->next;
		free(str);
	}
}

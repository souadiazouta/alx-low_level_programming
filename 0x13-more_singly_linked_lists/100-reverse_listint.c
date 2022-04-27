#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
 * reverse_listint - function that reverse list
 *
 * @head: node head
 *
 * Return: pointer to the first node
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *p = NULL, *n = NULL;

	if (head)
	{
		while (*head)
		{
			n = *head;
			*head = (*head)->next;
			n->next = p;
			p = n;
		}

		*head = p;
		return (*head);
	}

	return (NULL);

}

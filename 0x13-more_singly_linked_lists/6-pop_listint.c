#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - function that deletes the head 
 * node of list
 *
 * @head: node head
 *
 * Return: the head node or 0 if it is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *new;
	int n = 0;


	if (*head != NULL)
	{
		new = (*head)->next;
		n = (*head)->n;
		free(*head);
		*head = new;
	}

	return (n);
}

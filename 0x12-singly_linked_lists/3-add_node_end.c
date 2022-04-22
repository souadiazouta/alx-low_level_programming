#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node_end - function that adds a new node 
 * at the end of a list
 *
 * @head: pointer
 * @str: element to add
 *
 * Return: the of the new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;


	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}

	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;
	
	if (*head == NULL)
	{
		*head = new;

		return (*head);
	}
	while (head->next != NULL)
	{
		head = head->next;
	}

	head->next = new;

	return (new);

}

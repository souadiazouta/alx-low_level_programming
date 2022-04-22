#include "lists.h"
#include <stddef.h>
#include <string.h>
#include <stdlib.h>

/**
 * add_node - function that adds bew node
 * at the beginnig of a list
 *
 * @head:pointer
 * @str: name element add
 *
 * Return: address of the new element
 * or NULL element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;


	if(head == NULL)
		return (NULL);

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = strlen(str);

	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		new->next = *head;
		*head = new;
	}

	return (new);
	
}

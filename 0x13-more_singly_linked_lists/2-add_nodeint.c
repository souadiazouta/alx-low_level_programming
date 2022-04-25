#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - function that adds a new node
 * at the begining of a list
 *
 * @head: head of node
 * @n: new node to add
 *
 * Return: the address of the new element
 * or NULL if it failed.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;


	if(!head)
	{
		return (0);
	}

	node = malloc(sizeof(listint_t));

	if(!node)
	{
		return (0);
	}
	node->n = n;
	node->next = *head;
	*head = node;
	return (node);
}

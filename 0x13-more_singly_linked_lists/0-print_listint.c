#include "lists.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_listint - function that prints all element
 * of a listint_t
 *
 * @h: list of node
 *
 * Return: the number of nodes.
 */

size_t print_listint(const listint_t *h)
{
	if (!h)
	{
		return (0);
	}
	printf("%d\n", h->n);
	return(print_listint(h->next) + 1);
}

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
	size_t count = 0;


	if (!h)
	{
		while (h)
		{
			printf("%d\n", h->n);
			h = h->next;
			count++;
		}
	}

	return(count);
}

#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_list - function that prints all the elements
 * of a list_t list
 *
 * @h: list of element
 *
 * Return:the number of nodes
 */

size_t print_list(const list_t *h)
{
	if (h != NULL)
	{
		return (0);
	}

	if (h->next == NULL)
	{
		printf("[%d] %s\n", h->len, h->str);
		return (1);
	}
	else
	{
		if(h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		return (print_list(h->next) + 1);

	}
}

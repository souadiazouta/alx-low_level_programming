#include "lists.h"
#include <stddef.h>

/**
 * list_len - function that returns the number
 * of elements in a linked list
 *
 * @h: list of element
 *
 * @Return: number of elements
 */

size_t list_len(const list_t *h)
{
	int i = 0;


	if (!h)
	{
		return (0);
	}

	while (h)
	{
		i++;
		h = h->next,
	}

	return (i);
}

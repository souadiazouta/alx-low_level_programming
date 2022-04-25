#include <stddef.h>
#include "lists.h"

/**
 *
 * listint_len - function that returns the number
 *  of elements in a linked list
 *
 *  @h: list of node
 *
 *  Return: the number of element.
 *
 */

size_t listint_len(const listint_t *h)
{
	int len = 0;

	while (h)
	{
		len++;
		h = h->next;
	}
	return (len);
}

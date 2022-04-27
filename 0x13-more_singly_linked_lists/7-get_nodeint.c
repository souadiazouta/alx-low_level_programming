#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - function that returns
 * the nth of list
 *
 * @head: node head
 * @index: index of node
 *
 * Return: the nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int nth = 0;


	while (head != NULL)
	{
		if (index == nth)
			return (head);

		head = head->next;
		nth++;
	}

	return (NULL);
}

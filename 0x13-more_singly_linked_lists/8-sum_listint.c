#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint -function that return
 * the sum of all that of a list
 *
 * @head: node head
 *
 * Return: the sum of data
 */

int sum_listint(listint_t *head)
{
	int sum = 0;


	if (head)
	{
		while (head)
		{
			sum += head->n;
			head = head->next;
		}
	}

	return (sum);
}

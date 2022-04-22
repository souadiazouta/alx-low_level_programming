#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include "lists.h"

/** 
 * free_list - function that free a list
 * @head: pointer
 */

void free_list(list_t *head)
{
	if(head == NULL)
	{
		return;
	}
	free_list(head->next);
	free(head->str);
	free(head);
}


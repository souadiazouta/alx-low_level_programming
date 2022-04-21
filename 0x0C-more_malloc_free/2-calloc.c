#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 *
 * @nmemb: number of caracteres
 * @size: size of one case
 *
 * Return: allocate memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;


	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
	{
		return (NULL);
	}

	ptr = memset(ptr, 0, nmemb * size);

	return (ptr);

}

#include <stdio.h>
#include "lists.h"

/**
 * list_len - function with one argument
 * @h: const pointer type
 *
 * Description: prints all the elements of a list_t list
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	unsigned int length = 0;

	while (h != NULL)
	{
		h = h->next;
		length++;
	}
	return (length);
}

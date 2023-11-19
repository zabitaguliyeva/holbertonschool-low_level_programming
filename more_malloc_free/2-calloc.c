#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * _calloc - fills memory
 * @nmemb: tr
 * @size: str
 * Return: char
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ar;
	unsigned int ar_size, i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ar_size = nmemb * size;
	ar = malloc(ar_size);
	if (ar == NULL)
		return (NULL);
	while (i < ar_size)
	{
		ar[i] = 0;
		i++;
	}
	return (ar);
}


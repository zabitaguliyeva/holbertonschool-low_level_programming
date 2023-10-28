#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strcpy - a function that copies a string
 * @dest: variable
 * @src: variable
 * Return: integer
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = strlen(src);

	while (i > -1)
	{
		*(dest + i) = *(src + i);
		i--;
	}
	return (dest);
}


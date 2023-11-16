#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *z;
	int i;
	int size = strlen(str);

	if (str == NULL)
		return (NULL);
	i = 0;


	z = malloc(sizeof(char) * size + 1);

	if (z == NULL)
		return (NULL);

	for (i = 0; i <= size; i++)
		z[i] = str[i];

	return (z);
}

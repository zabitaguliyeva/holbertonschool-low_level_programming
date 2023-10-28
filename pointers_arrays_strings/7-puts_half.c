#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * puts_half - a function that prints half of the string
 * @str: variable
 * Return: integer
 */
void puts_half(char *str)
{
	int i, n;

	n = strlen(str);

	i = (n + 1) / 2;

	while (i < n)
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar ('\n');
}


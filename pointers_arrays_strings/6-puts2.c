#include <stdio.h>
#include "main.h"
/**
 * puts2 - prints string from start one by one
 * @str: variable
 * Return: integer
 */
void puts2(char *str)
{
	int i = 0;

	while (*(str + i))
	{
		if (i % 2 == 0)
		{
			_putchar(*(str + i));
		}
		i++;
	}
	_putchar('\n');
}

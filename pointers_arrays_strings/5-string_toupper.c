#include "main.h"
#include <stdio.h>
/**
 * string_toupper - a function that chagess letters to uppercase.
 * @a: str
 * Return: returns a value.
 */
char *string_toupper(char *a)
{
	int i;
	char j;

	i = 0;
	while (*(a + i) != '\0')
	{
		j = *(a + i);
		if (*(a + i) >= 97 && *(a + i) <= 122)
		{
			*(a + i) = j - 32;
			i++;
		}
		else
		{
			i++;
		}
	}
	return (a);
}

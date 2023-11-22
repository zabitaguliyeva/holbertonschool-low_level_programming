#include <stdio.h>
#include <ctype.h>
#include "function_pointers.h"

/**
 * int_index - function to find indexs which are int
 * @array: array
 * @size: size
 * @cmp: for checking
 *
 * Description - description
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || cmp == NULL || array == NULL)
		return (-1);
	if (array && size && cmp)
	for (i = 0; i <= size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}

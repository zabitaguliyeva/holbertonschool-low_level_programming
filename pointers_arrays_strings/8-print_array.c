#include "main.h"
#include <stdio.h>
/**
 * print_array - a function that prints array
 * @a: int
 * @n: int
 */
void print_array(int *a, int n)
{
	int arr;

	for (arr = 0; arr < n; arr++)
	{
		printf("%d", a[arr]);
		if (arr != n - 1)
			printf(", ");
	}
	printf("\n");
}


#include "main.h"
/**
 * swap_int - a function that swaps two number
 * @a: input
 * @b: input
 * Return: 0
 */
void swap_int(int *a, int *b)
{
int tmp;

tmp = *a;
*a = *b;
*b = tmp;

}

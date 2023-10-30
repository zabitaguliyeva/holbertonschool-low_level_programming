#include "main.h"

/**
 * _pow_recursion - a function that calculates power of numbers
 * @x: base
 * @y: pow
 * Return: depends on condition
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	else if (y > 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	else
		return (-1);
}

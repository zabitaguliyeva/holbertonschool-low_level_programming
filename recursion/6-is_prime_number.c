#include <stdio.h>

/**
 * is_prime_number - check the code
 * @n: int
 * @x: int
 * @y: int
 * Return: Always 0.
 */

int function(int x, int y)
{
	if (y % x == 0)
	{
		return (0);
	}
	if (y % x != 1)
	{
		return (1);
	}
	return (function(x + 1, y));
}

int is_prime_number(int n)
{
	if (n < 0 || n == 1)
	{
		return (0);
	}
	return (function(2, n));
}

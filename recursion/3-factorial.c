#include "main.h"
/**
 * factorial - A function that calculates factorial
 *
 * @n - integer value
 * Return -fac
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n > 0)
	{
		n = n * factorial(n - 1);
		return (n);
	}
	else
	{
		return (-1);
	}
}


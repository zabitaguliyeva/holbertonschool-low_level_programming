#include "main.h"
#include <stdio.h>

/**
 * _abs - Write a function that computes the absolute value of an integer.
 *@n:Write a function that computes the absolute value of an integer.
 * Return: Always 0.
 */

int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	return ((-1) * n);
}


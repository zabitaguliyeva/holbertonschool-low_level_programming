#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - finds sum
 * @n: num
 *
 * Return: sum when n is not zero
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum;
	va_list list;

	va_start(list, n);

	if (n == 0)
	{
		return (0);
	}
	sum = 0;
	for (i = 0; i < n; i++)
	{
		sum += va_arg(list, int);
	}
	va_end(list);
	return (sum);
}

#include "main.h"
/**
 * _puts_recursion - prints string
 *
 * Return: Always 0.
 */
void _puts_recursion(char *s)
{

	if (*s == '\0')
	{
		return;
	}

putchar(*s);
_puts_recursion(++s);

}

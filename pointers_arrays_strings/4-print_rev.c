#include "main.h"
#include <string.h>
/**
 * print_rev - a function that reverses a function
 * @s: input
 * @n: input
 * Return: (a)
 */
void print_rev(char *s)
{
int n;
n = strlen(s);
while (n != -1)
{
if (*(s + n) == '\0')
{
n--;
continue;
}
putchar(*(s + n));
n--;
}
putchar('\n');
}

#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - for printing strings
 * @separator: separator
 * @n: count of nums
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		if (list == NULL)
		{
			printf("(nil)");
		}
		printf("%s", va_arg(list, char *));
				if (i != (n - 1) && separator != NULL)
				{
					printf("%s", separator);
				}
				va_end(list);
	}
	printf("\n");
}

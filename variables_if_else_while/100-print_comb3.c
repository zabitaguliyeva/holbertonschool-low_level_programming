#include <stdio.h>

/**
 * main - Program that prints all possible different combinations of two digit
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int j;

	for (i = '0'; i <= '8'; i++)
	{
		for (j = i; j <= '9'; j++)
		{
			if (i != j)
			{
			putchar(i);
			putchar(j);
			if (!(i == '8' && j == '9'))
			{
				putchar(',');
				putchar(' ');
			}
			if (i == '8' && j == '9')
			{
				putchar('\n');
			}
			}
		}
	}
	return (0);
}


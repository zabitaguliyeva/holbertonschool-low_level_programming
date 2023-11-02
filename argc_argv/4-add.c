#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
/**
 * main - a function that prints array
 * @argc: num of the args
 * @argv: an array
 * @sum: sum
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i, sum = 0, num;

	(void) argv;
	for (i = 1; i < argc; i++)
	{
		num = atoi(argv[i]);
		if (strlen(argv[i]) != strspn(argv[i], "0123456789"))
		{
			printf("Error\n");
			return (0);
		}
		else
		{

			sum += num;

		}
	}
	printf("%d\n", sum);
	return (0);
}


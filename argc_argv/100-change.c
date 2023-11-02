#include <stdlib.h>
#include <stdio.h>

/**
 * main - a function that prints name of the function
 * @argc: num of the args
 * @argv: an array
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	int i = 0, coin, cents = 0, currency[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
	}
	else if (argv[1][0] == 45)
	{
		printf("0\n");
	}

	else
	{
		coin = atoi(argv[1]);
		while (i < 5)
		{
			cents += coin / currency[i];
			coin %= currency[i];

			i++;
		}
		printf("%d\n", cents);
	}
	return (0);
}

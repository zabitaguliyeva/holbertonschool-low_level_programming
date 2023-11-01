#include <stdlib.h>
#include <stdio.h>

/**
 * main - a function that prints array
 * @argc: num of the args
 * @argv: an array
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int num1, num2;
	int result = 1;

	if (argc != 3)
	{
		printf("Error\n");

		return (1);
	}

	(void) argv;

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	result = num1 * num2;
	printf("%d\n", result);
	return (0);
}


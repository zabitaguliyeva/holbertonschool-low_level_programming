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
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}

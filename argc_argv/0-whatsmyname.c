#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * main - a function that prints name of the function
 * @argc: num of the args
 * @argv: an array
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);
	return (0);
}


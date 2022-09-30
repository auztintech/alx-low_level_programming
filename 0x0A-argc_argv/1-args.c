#include <stdio.h>
#include "main.h"

/**
 * main - print the number of arguments passed
 * @argc: argument count
 * @argv: argument vectors
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%i\n", argc - 1);
	return (0);
}

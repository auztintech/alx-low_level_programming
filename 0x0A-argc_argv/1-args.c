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
	int i;
	(void) argv;
	for (i = 1; i < argc; i++)
	{
		printf("%d\n", i);
	}
	return (0);
}

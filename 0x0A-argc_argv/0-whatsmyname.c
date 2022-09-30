#include <stdio.h>

/**
 * main - function that prints its name
 * @argc: parameter
 * @argv: an array
 * Return: 0 for success
 */

int main (int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", *argv);
	return (0);
}

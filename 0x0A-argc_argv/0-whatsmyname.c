#include <stdio.h>

/**
 * main - function that prints its name
 * @argc: parameter
 * @argv: an array
 * Return: 0 for success
 */

int main (int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}

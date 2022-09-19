#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @a: integer one
 * @b: integer two
 * Return: Always the result
 */
void swap_int(int *a, int *b)
{
	int nom = *a;
	*a = *b;
	*b = nom;

}

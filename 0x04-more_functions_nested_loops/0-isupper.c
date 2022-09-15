#include "main.h"

/**
 * _isupper - return 1 if alphabet is uppercase else, o
 * @c: as character
 * Return: 1 for uppercase, 0 for lowercase
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);


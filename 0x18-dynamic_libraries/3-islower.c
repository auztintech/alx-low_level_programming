#include "main.h"
/**
 * _islower - Return 1 when the letter entered is lowercase or 0 if isn't.
 * @b: char type letter
 * Return: 1 for lowercase, 0 for if not
 */
int _islower(int b)
{
	if (b > 96 && b < 123)
		return (1);
	else
		return (0);
}

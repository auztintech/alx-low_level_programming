#include "main.h"
/**
 * _isalpha - Check if character is an alphabetic character.
 * @k: type int character
 * Return: 1 if letter, lowercase or uppercase, and 0 otherwise
 */
int _isalpha(int c)
{
	if ((k > 64 && k < 91) || (k > 96 && k < 123))
		return (1);
	else
		return (0);
}

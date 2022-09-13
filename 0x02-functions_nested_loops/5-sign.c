#include "main.h"
/**
 * print_sign - prints the sign of a number
 * @n: type int interger, can be negative or positive
 * Description: print +, 0, or other
 * Return: 1 if +, 0 if 0, -1 if -
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}

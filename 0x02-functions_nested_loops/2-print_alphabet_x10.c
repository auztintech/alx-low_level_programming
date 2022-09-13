#include "main.h"
/**
 * print_alphabet_x10 - Print alphabet in lowercases 10 time.
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int k =0;
	char m;

	while (k < 10)
	{
		m = 'a';
		while (m <='z')
		{
			_putchar(m);
			m++;
		}
		_putchar('\n');
		k++

	}
}

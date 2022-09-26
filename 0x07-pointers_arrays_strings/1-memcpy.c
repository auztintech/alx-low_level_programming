#include "main.h"
/**
 * _memcy - a function that copies a momory area
 * @dest: char
 * @src: char too
 * @n: int
 * Return: a ponter to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i= 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

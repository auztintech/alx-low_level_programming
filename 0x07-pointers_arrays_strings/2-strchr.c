
Skip to content
Pull requests
Issues
Marketplace
Explore
@auztintech
teddy004 /
alx-low_level_programming
Public

Code
Issues
Pull requests
Actions
Projects
Security

    Insights

alx-low_level_programming/0x07-pointers_arrays_strings/2-strchr.c
@teddy004
teddy004 a function that locates a character in a string.
Latest commit 93a2fd5 on Mar 28
History
1 contributor
executable file 21 lines (20 sloc) 329 Bytes
#include "main.h"
/**
* _strchr - a function that locates a character in a string
* @s: string
* @c: char in s
* Return: the first occurrence or NULL
**/
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	if (s[i] == c)
		return (s + i);
	else
		return ('\0');
}
Footer
© 2022 GitHub, Inc.
Footer navigation

    Terms
    Privacy
    Security
    Status
    Docs
    Contact GitHub
    Pricing
    API
    Training
    Blog
    About

teddy004/alx-low_level_programming
alx-low_level_programming/0-memset.c at main · teddy004/alx-low_level_programming
alx-low_level_programming/2-strchr.c at main · teddy004/alx-low_level_programming

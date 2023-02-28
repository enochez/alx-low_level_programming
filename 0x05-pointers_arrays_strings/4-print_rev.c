#include "main.h"

/**
 *print_rev - prints a string in reverse
 *
 *@s: a string
 */

void print_rev(char *s)
{
	int a, n, len;

	a = 0;

	while (s[a] != '\0')
	{
		a++;
	}

	len = a;

	for (n = len - 1; n >= 0; n--)
	{
		_putchar(s[n]);
	}

	_putchar('\n');
}

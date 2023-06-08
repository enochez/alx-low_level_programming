#include "main.h"

/**
 * A function that prints a string followed by a new line.
 *
 * @s: string that is to be printed.
 *
 */
void _puts_recursion(char *s);
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
		_putchar('\n');
}

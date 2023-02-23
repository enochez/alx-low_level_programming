#include <stdio.h>
#include "main.h"

/**
 *print_alphabet - prints the alphabet in lower case.
 *
 *Return: Always 0.
 */

void print_alphabet(void)
{
	char a;

	for (a = 97; a != 123; a++)
	{
		_putchar(a);
	}

	_putchar('\n');

}

#include "main.h"

/**
 *print_alphabet_x10 - prints the alphabet in lowercase 10 times.
 *
 *Return: no return value.
 */

void print_alphabet_x10(void)
{
	int b;
	char a;

	for (b = 0; b != 10; b++)
	{
		for (a = 97; a != 123; a++)
		{
			_putchar(a);

		}
		_putchar('\n');
	}


}

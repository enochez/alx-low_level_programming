#include "main.h"

/**
 *_islower - checks for lower case characters
 *
 *@a: - a char in ASCII
 *
 *Return:   return 1 if c is lower case.  0 if is else.
 */

int _islower(int a)
{

	if (a >= 97 && a <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}

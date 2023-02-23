#include <stdio.h>
#include "main.h"

/**
 *main - Entry point
 *
 *Return: return Always(0)
 **/
int main(void)
{
	char print[] = "_putchar";
	int a;

	for (a = 0; print[a] != '\0'; a++)
	{
		_putchar(print[a]);
	}

	_putchar('\n');

	return (0);
}

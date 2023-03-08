#include "main.h"

/**
 *print_string - prints string followed by newline
 *@str: pointer to the string to be printed
 *
 *return: void
 */
void print_string(char *str)
{
	if (str == NULL)
		return;
	printf ("%s\n", str);
}

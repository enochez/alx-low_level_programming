#include "main.h"
#include <stdio.h>

/**
 * print_string - prints a string followed by a new line
 * @str: the string to be printed
 *
 * Return: void
 */
void print_string(char *str)
{
    if (str != NULL)
    {
        printf("%s\n", str);
    }
    return (0);
}

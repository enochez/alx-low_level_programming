#include "main.h"

/**
 *_isalpha - checks for alphabetic characters.
 *
 *@e: an ASCII character.
 *
 *Return: 1 if a character of the alphabet. 0 if else.
 */

int _isalpha(int e)
{

	if ((e >= 65 && e <= 90) || (e >= 97 && e <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');

}

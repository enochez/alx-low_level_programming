#include "main.h"

/**
 *_strcat - appends the src string to the dest
 *string
 *
 *@dest: a string pointer
 *@src:  a string
 *
 *Return: Returns a poiter to the resulting string.
 */

char *_strcat(char *dest, char *src)
{
	int a, n;

	a = 0;
	n = 0;

	while (dest[a] != '\0')
	{
		a++;
	}

	while (src[n] != '\0')
	{
		dest[a] = src[n];
		n++;
		a++;
	}

	dest[a] = '\0';

	return (dest);

}

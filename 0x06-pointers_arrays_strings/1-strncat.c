#include "main.h"

/**
 *_strncat - concaterates two string
 *
 *@dest: string
 *@src: sring 2
 *@n: integer
 *
 *Return: dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int a, k;

	a = 0;
	k = 0;

	while (dest[a] != '\0')
		a++;

	while (src[k] != '\0' && k < n)
	{
		dest[a] = src[k];
		a++;
		k++;

	}

	dest[a] = '\0';

	return (dest);

}

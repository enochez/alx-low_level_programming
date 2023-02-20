#include <stdio.h>
/**
*main - prints out all numbers between 0 and 9 with commas and spaces
*
*Return: retun value always (0)
*/
int main(void)
{
int a;

for (a = 48; a < 58; a++)
{
putchar(a);
if (a != 57)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}

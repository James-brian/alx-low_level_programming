#include <stdio.h>

/**
 * print_rev - prints a string in reverse
 *
 * @s: string to print
 */


void print_rev(char *s)
{
int i = 0;
while (s[i])
{
i++;
while (i--)
{
_ putchar(s[i]);
}
_putchar('\n');
}


#include"main.h"


/**
 * print_alphabet_x10 - function that will print the alphabet 10 times
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
int count, leta;
for (count = 0; count <= 9; count++)
{
for (leta = 'a'; leta <= 'z'; leta++)
_putchar(leta);
_putchar('\n');
}
}

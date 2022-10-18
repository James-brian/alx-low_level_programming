#include "main.h"



/**
 *  print_last_digit - last digit
 *
 *@n: The int to print
 *
 * Return: Always 0.
 */


int print_last_digit(int n)
{
int l_digit;
if (n < 0)
{
l_digit = (-1 * (n % 10));
_putchar (l_digit + '0');
return (l_digit);
}
else
{
last_digit = (n % 10);
_putchar (last_digit + '0');
return (last_digit);
}
}

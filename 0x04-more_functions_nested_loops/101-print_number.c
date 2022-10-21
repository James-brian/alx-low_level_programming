#include "main.h"

/**
 * print_number - prints numbers
 *
 * @n: number to be printed
 *
 * Return:void
 */


void print_number(int n)
{
int a = 1, x = 0, y = 0;
if (n < 0)
{
putchar('-');
n = -n;
}
while (n / a != 0)
{
a *= 10;
x++;
}
a = a / 10;
while (y < x)
{
putchar('0' + n / a);
n = n - (n / a) *a;
a = a / 10;
y++;
}
if (x == 0)
putchar('0' + n);
}



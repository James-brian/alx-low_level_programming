#include "main.h"

/**
 *print_times_table - prints the  times table with parameter
 *
 *@n: parameter
 *
 *Return: returns nothing
 */

void print_times_table(int n)
{
int digit, mult, ans;
if (n <= 15 && n >= 0)
{
for (digit = 0; digit <= n; digit++)
{
_putchar('0');
for (mult = 1; mult <= n; mult++)
{
_putchar(',');
_putchar(' ');
ans = digit * mult;
if (ans <= 99)
_putchar(' ');
if (ans <= 9)
_putchar(' ');
if (ans >= 100)
{
_putchar((ans / 100) + '0');
_putchar((ans / 10) % 10 + '0');
}
else if (ans <= 99 && ans >= 10)
{
_putchar((ans / 10) + '0');
}
_putchar((ans % 10) + '0');
}
_putchar('\n');
}
}

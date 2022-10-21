#include <stdio.h>

#include <math.h>

/**
 * main - prime numbers
 *
 * Return: Always 0.
 */

int main(void)
{
unsigned int long x = 612852475143, y = (int) sqrt(x);
int z = 1;
while (z)
{
if (x % y == 0)
{
printf("%lu \n", x / y);
break;
}
y--;
}
return (0);
}

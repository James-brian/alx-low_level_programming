#include <stdio.h>

/**
 * main - prints sum of even fibonacci suit numbers
 *
 * Return: return 0
 */

int main(void)
{
unsigned long x = 0, y = 1, z = 0, sum = 0;
while (z <= 4000000)
{
z = x + y;
x = y;
y = z;
if ((x % 2) == 0)
sum += x;
}
printf("%ld\n", sum);
return (0);
}

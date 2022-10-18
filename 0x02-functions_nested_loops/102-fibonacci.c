#include <stdio.h>

/**
 * main - prints out first 50 fibonacci numbers
 *
 * Return: return 0
 */

int main(void)
{
int i;
unsigned long x = 0, y = 1, z;
for (i = 0; i < 50; i++)
{
z = x + y;
printf("%lu", z);
x = y;
y = z;
if (i == 49)
{
printf("\n");
}
else
{
printf(", ");
}
}
return (0);
}

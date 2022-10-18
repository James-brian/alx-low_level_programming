#include <stdio.h>

/**
 * main - prints count of multiples of 3 or 5 below 1024
 *
 * Return: return 0
 */

int main(void)

{
int j, sum = 0;
for (j = 0; j < 1024; j++)
{
if ((j % 3) == 0 || (j % 5) == 0)
sum += j;
}
printf("%d\n", sum);
return (0);
}

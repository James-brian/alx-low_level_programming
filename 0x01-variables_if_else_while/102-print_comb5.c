#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success/correct)
 */

int main(void)
{
int num_x;

int num_y;	

for (num_x = 0;num_x < 100 ; num_x++)
{
for (num_y = num_x + 1 ; num_y < 100; num_y++)
{
putchar (num_x / 10 + '0');
putchar (num_x % 10 + '0');
putchar (' ');
putchar (num_y / 10 + '0');
putchar (num_y % 10 + '0');
if (num_x == 98 && num_y == 99)
{
break;
}
putchar(',');
putchar (' ');
}
}
putchar('\n');
return (0);
}

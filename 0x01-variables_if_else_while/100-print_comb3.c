#include <stdio.h>

#include <unistd.h>

/**
 * main - Entyr point
 *
 * Description: prints two digits combination
 *
 * Return: Always 0 (success)
 */

int main(void)

{
int a, x;
for (a = '0'; a <= '9'; a++)
{
for (x = '0'; x <= '9'; x++)
{
if (a < x)
{
putchar(a);
putchar(x);
if (a != '8' || (a == '8' && x != '9'))
{
																				putchar(',');
putchar(',');
}
}
}
}
putchar('\n');
return (0);
}

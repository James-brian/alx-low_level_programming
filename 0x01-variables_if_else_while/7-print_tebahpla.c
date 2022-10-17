#include<stdio.h>



/**
 * main - Entry point
 *
 * Description: print a-z in reverse
 *
 * Return: Always 0 (Success)
 */

int main(void)

{
char leta = 'z';
while (leta >= 'a')
{
putchar(leta);
--leta;
}
putchar('\n');
return (0);
}

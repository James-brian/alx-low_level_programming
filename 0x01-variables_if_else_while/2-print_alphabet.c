#include <stdio.h>



/**
 * main - Entry point
 *
 * Description: print all aplhabet letters
 *
 * Return: Always 0 (Success)
 */



int main(void)

{

char leta = 'a';

while (leta <= 'z')
{
putchar(leta);

++leta;

}
putchar('\n');

return (0);

}

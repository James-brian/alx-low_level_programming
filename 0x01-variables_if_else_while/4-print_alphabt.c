#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success/correct)
 */
int main(void)
{
char leta;
for (leta = 'a'; leta <= 'z'; leta++)
{
if (leta == 'q' || leta == 'e')
continue;
putchar(leta);
}
putchar('\n');
return (0);
}

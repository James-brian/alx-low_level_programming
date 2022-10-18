#include "main.h"

#include <stdio.h>

/**
 * print_to_98 - print n to 98 counts separated by comma
 *
 * @n: input
 */

void print_to_98(int n)
{
int i;
if (n < 98)
{
for (i = n; i < 98; i++)
printf("%d, ", i);
printf("%d\n", 98);
}
else
{
for (i = n; i > 98; i--)
printf("%d, ", i);
printf("%d\n", 98);
}
}

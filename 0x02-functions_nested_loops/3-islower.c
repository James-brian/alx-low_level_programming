#include "main.h"



/**
 * _islower - Short description, single line
 *
 * @c: contains value to be compared
 *
 * Return: Always 0.
 */

int _islower(int c)
{
char z = 122;
char a = 97;

while (a < z)
{
a++;
if (c)
{
return (1);
}
else
{
return (0);
}
}
}

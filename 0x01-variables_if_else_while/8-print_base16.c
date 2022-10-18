#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0 (success/correct)
 */

int main(void)
{
char hexdec;
for (hexdec = 48; hexdec <= 57; hexdec++)
{
putchar(hexdec);
}
for (hexdec = 97 ; hexdec <= 102; hexdec++)
{
putchar(hexdec);
}
putchar ('\n');
return (0);
}

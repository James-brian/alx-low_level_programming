#include <stdio.h>

/**
 * rev_string - reverses the string
 *
 * @s: pointer to the string to print
 *
 * Return: void
 */

void rev_string(char *s)
{
int l, i, x;
char ch;
for (l = 0; s[l] != '\0'; l++)
{
i = 0;
x = l / 2;
while (x--)
{
ch = s[l - i - 1];
s[l - i - 1] = s[i];
s[i] = ch;
i++;
}
}
}

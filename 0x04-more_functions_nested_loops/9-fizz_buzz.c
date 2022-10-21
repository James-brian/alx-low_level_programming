#include <stdio.h>

/**
 * main - program that prints either number
 *
 * or fizz or buzz or fizzBuzz
 *
 * *Return: returns 0
 */


int main(void)
{
int x = 1;
while (x <= 100)
{
if (x % 3 == 0 && x % 5 == 0)
{
printf("FizzBuzz");
}
else if (x % 3 == 0)
{
printf("Fizz");
}
else if (x % 5 == 0)
{
printf("Buzz");
}
else
{
printf("%i", x);
}
if (x != 100)
{
_putchar(' ');
}
x++;
}
_putchar('\n');
return (0);
}

#include <stdio.h>



/**
 * _atoi - convert a string to an integer.
 *
 * @s: char type string
 *
 * Return: integer converted
 */



int _atoi(char *s)

{

	int x = 1, y = 0, Num1;

	for (Num1 = 0; !(s[Num1] >= 48 && s[Num1] <= 57); Num1++)

	{

		if (s[Num1] == '-')

		{

			x *= -1;

		}

	}

	for (int i = Num1; s[i] >= 48 && s[i] <= 57; i++)

	{

		y *= 10;

		y += (s[i] - 48);

	}

	return (x * y);

}

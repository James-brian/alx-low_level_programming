#include <stdio.h>

/**
 * puts2 - gets a string
 *
 * @str: pointer to the string to print
 *
 * Return: 0
 */



void puts2(char *str)

{

	int x = 0;

	while (str[x] != '\0')

	{

		if (x % 2 == 0)

		{

			putchar(str[x]);

		}

		x++;

	}

	putchar('\n');

}

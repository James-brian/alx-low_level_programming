#include <stdio.h>



/**
 * puts_half - print second half of a string
 *
 * @str: char array string type
 *
 * Description: If odd number of chars, print (length - 1) / 2
 */



void puts_half(char *str)

{

	int x;

	for (x = 0; str[x] != '\0'; x++)

	{

		x++;

		for (x /= 2; str[x] != '\0'; x++)

		{

			putchar(str[x]);

		}

	}

	putchar('\n');

}

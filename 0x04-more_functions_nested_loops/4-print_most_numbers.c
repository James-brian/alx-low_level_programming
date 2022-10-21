#include "main.h"

/**
 * print_most_numbers - prints numbers except 2 and 4
 *
 * Return: returns 0
 */

void print_most_numbers(void)
{

	int x;

	for (x = 48; x < 58; x++)

	{

		if (x == 50 || x == 52)

		{

			continue;

		}

		else

		{

			_putchar(x);

		}

	}

	_putchar('\n');

}

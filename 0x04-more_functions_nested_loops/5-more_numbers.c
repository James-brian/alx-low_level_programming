#include"main.h"

/**
 * more_numbers - print 0 - 14 ten times
 *
 * Return: Alwayes 0 (Success)
 */

void more_numbers(void)

{

	int z, x, y;

	for (x = 1; x <= 10; ++x)

	{

		for (y = 0; y <= 14; ++y)

		{

			z = y;

			if (y > 9)

			{

				_putchar(1 + '0');

				z = y % 10;

			}

			_putchar('0' + z);

		}

		_putchar('\n');

	}

}

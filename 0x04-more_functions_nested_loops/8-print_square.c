#include "main.h"



/**
 * print_square - prints square
 *
 * @n : number of # to be printed
 *
 * Return:void
 */



void print_square(int n)
{

	int a = 0, b;

	while (a < n && n > 0)
	{

		b = 0;

		while (b < n)
		{

			putchar('#');

			b++;

		}

		putchar('\n');

		a++;

	}

	if (a == 0)

		putchar('\n');

}

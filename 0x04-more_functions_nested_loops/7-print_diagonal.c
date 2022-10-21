#include "main.h"



/**
 * print_diagonal - prints a diagonal
 *
 * @n : parameter
 *
 * Return:void
 */



void print_diagonal(int n)
{

	int a = 0, b;

	while (a < n && n > 0)
	{

		b = 0;

		while (b < a)
		{

			putchar(' ');

			b++;

		}

		putchar('\\');

		putchar('\n');

		a++;

	}

	if (a == 0)

		putchar('\n');

}

#include "main.h"



/**
 * print_line - check for a digit
 *
 * @n : number of _ to be printed
 *
 * Return:void
 */


void print_line(int n)
{

	int x = 0;

	while (x < n && n > 0)

	{

		_putchar('_');

		x++;

	}

	_putchar('\n');

}

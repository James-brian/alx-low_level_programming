#include <stdio.h>

/**
 * swap_int - swaps the values of two integers
 *
 * @a: pointer parameter 1
 *
 * @b: pointer paraemter 2
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{

	*a += *b;

	*b = *a - *b;

	*a = *a - *b;

}

#include "main.h"

/**
 * reverse_array - reverse a int array
 *
 * @a: pointer
 *
 * @n: array length
 *
 * Return: void
 */



void reverse_array(int *a, int n)

{

	int rev, x, y;

	x = 0;

	y = n - 1;

	while (x < y)

	{

		rev = a[x];

		a[x] = a[y];

		a[y] = rev;

		x++;

		y--;

	}

}

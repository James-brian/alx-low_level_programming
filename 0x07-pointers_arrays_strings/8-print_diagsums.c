#include <stdio.h>

/**
 * print_diagsums - description
 *
 * @a: 2d array of int types
 *
 * @size: size of array (square)
 */



void print_diagsums(int *a, int size)

{

	int i;

	unsigned int x, y;

	x = 0;

	y = 0;

	for (i = 0; i < size; i++)

	{

		x += a[(size * i) + i];

		y += a[(size * (i + 1)) - (i + 1)];

	}

	printf("%d, %d\n", x, y);

}

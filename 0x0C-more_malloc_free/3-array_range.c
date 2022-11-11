#include <stdio.h>

#include <stdlib.h>

#include <string.h>


/**
 * array_range - creates an array of integers
 * @min: minimum
 * @max: maximum
 * Return: array
 */


int *array_range(int min, int max)

{

	int *p, x = 0, y = min;

	if (min > max)

		return (0);

	p = malloc((max - min + 1) * sizeof(int));

	if (!p)

		return (0);

	while (x <= max - min)

		p[x++] = y++;

	return (p);

}

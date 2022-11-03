#include <stdio.h>

/**
 * _sqrt_recursion -  natural sqrtf a number
 *
 * @n: int to find sqrt
 *
 * Return: natural sqrt ot -1
 */



int _sqrt_recursion(int n)

{

	return (square_root(n, 1));

}


/**
 * square_root - find sqrt
 *
 * @n: int to find sqrt
 *
 * @evall: sqrt
 *
 * Return: int
 */



int square_root(int n, int evall)

{

	if (evall * evall == n)

	{

		return (evall);

	}

	else if (evall * evall < n)

	{

		return (square_root(n, evall + 1));

	}

	else

	{

		return (-1);

	}

}

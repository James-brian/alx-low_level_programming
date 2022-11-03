#include <stdio.h>

/**
 * sqroot - find sqrt
 *
 * @n: int to find sqrt
 *
 * @evall: sqrt
 *
 * Return: int
 */



int sqroot(int n, int evall)

{

	if (evall * evall == n)

	{

		return (evall);

	}

	else if (evall * evall < n)

	{

		return (sqroot(n, evall + 1));

	}

	else

	{

		return (-1);

	}

}



/**
 * _sqrt_recursion -  natural sqrtf a number
 *
 * @n: int to find sqrt
 *
 * Return: natural sqrt ot -1
 */

int _sqrt_recursion(int n)

{

	return (sqroot(n, 1));

}





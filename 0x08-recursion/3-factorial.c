#include <stdio.h>


/**
 * factorial - gets factorial of *n
 *
 * @n: positive int
 *
 * Return: factorial
 */



int factorial(int n)

{

	if (n < 0)

	{

		return (-1);

	}

	else if (n == 0)

	{

		return (1);

	}

	return (n * factorial(n - 1));

}

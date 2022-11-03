#include <stdio.h>

int prime_num(int n, int x);

/**
 * is_prime_number - states if number is prime
 *
 * @n:int
 *
 * Return:int
 */

int is_prime_number(int n)

{

	if (n <= 1)

	{

		return (0);

	}

	return (prime_num(n, n - 1));

}



/**
 * prime_num -checks to see if number is prime
 *
 * @n:int
 *
 * @x:int
 *
 * Return:int
 */


int prime_num(int n, int x)

{

	if (x == 1)

	{

		return (1);

	}

	if (n % x == 0 && x > 0)

	{

		return (0);

	}

	return (prime_num(n, x - 1));

}



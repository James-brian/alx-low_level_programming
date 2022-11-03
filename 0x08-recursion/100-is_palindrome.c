#include <stdio.h>

/**
 * _strlen_recursion - prints string length
 *
 * @s: string
 *
 * Return: string length
 */



int _strlen_recursion(char *s)

{

	if (s[0] != '\0')

	{

		return (1 + _strlen_recursion(s + 1));

	}

	return (0);

}

/**
 * check_palindrome - checks whether s is palindrome
 *
 * @s: string base index
 *
 * @x: left index.
 *
 * @y: rigth index.
 *
 * Return: 1 if s is palindrome, 0 otherwise.
 */



int check_palindrome(char *s, int x, int y)

{

	if (s[x] == s[y])

	{

		if (x > y / 2)

		{

			return (1);

		}

		else

		{

			return (check_palindrome(s, x + 1, y - 1));

		}

	}

	else

	{

		return (0);

	}

}

/**
 * is_palindrome - check if s is palindrome
 *
 * @s: base address for string.
 *
 * Return: 1 if n is prime, 0 otherwise.
 */

int is_palindrome(char *s)

{

	return (check_palindrome(s, 0, _strlen_recursion(s) - 1));

}

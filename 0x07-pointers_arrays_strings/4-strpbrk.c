#include <stdio.h>

/**
 * _strpbrk - Search a string for any of a set of bytes.
 *
 * @s: string
 *
 * @accept: string to match
 *
 * Return: Pointer to the byte in `s` that matches one of the bytes in `accept`
 *
 * or NULL if no such byte is found.
 */


char *_strpbrk(char *s, char *accept)

{

	int x, y;

	for (x = 0; *s != '\0'; x++)

	{

		for (y = 0; accept[y] != '\0'; y++)

		{

			if (*s == accept[y])

			{

				return (s);

			}

		}

		s++;

	}

	return (NULL);

}


#include <stdio.h>

/**
 * _strchr - a function that locates a character in a string
 *
 * @s: pointer to our string array input
 *
 * @c: character to locate from input array
 *
 * Return: first occurence of charatcer or null if not found
 */



char *_strchr(char *s, char c)

{

	int a;

	while (1)

	{

		a = *s++;

		if (a == c)

		{

			return (s - 1);

		}

		if (a == 0)

		{

			return (NULL);

		}

	}

}

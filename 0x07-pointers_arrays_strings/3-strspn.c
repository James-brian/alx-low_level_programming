#include <stdio.h>

/**
 * *_strspn - return the number of occurent of a string
 *
 * @s: string to check
 *
 * @accept: character to match
 *
 * Return: int
 */





unsigned int _strspn(char *s, char *accept)

{

	int x, y, n, f;

	n = 0;

	for (x = 0; s[x] != '\0'; x++)

	{

		f = 0;

		for (y = 0; accept[y] != '\0'; y++)

		{

			if (s[x] == accept[y])

			{

				n++;

				f = 1;

			}

		}

		if (f == 0)

		{

			return (n);

		}

	}

	return (0);

}

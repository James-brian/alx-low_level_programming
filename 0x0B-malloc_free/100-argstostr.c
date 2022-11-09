#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of a program.
 *
 * @ac: argument count.
 *
 * @av: argument vector.
 *
 * Return: pointer of an array of char
 */

char *argstostr(int ac, char **av)
{
	char *p;
	int c, x, y, i;

	if (ac == 0)
	{
		return (NULL);
	}
	for (c = x = 0; x < ac; x++)
	{
		if (av[x] == NULL)
		{
			return (NULL);
		}
		for (y = 0; av[x][y] != '\0'; y++)
		{
			c++;
		}
		c++;
	}
	p = malloc((c + 1) * sizeof(char));
	if (p == NULL)
	{
		free(p);
		return (NULL);
	}
	for (x = y = i = 0; i < c; y++, i++)
	{
		if (av[x][y] == '\0')
		{
			p[i] = '\n';
			x++;
			i++;
			y = 0;
		}
		if (i < c - 1)
		{
			p[i] = av[x][y];
		}
	}
	p[i] = '\0';
	return (p);
}

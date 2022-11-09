#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory.
 *
 * @str: string.
 *
 * Return: pointer of an array of chars
 */

char *_strdup(char *str)

{
	char *p;
	unsigned int x, y;

	if (str == NULL)
	{
		return (NULL);
	}

	for (x = 0; str[x] != '\0'; x++)
	{
		;
	}
	p = (char *)malloc(sizeof(char) * (x + 1));
	if (p == NULL)
	{
		return (NULL);
	}
	for (y = 0; y <= x; y++)
	{
		p[y] = str[y];
	}
	return (p);
}

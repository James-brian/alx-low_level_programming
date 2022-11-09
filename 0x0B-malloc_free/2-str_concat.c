#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 *
 * @s1: first string.
 *
 * @s2: second string.
 *
 * Return: pointer of an array of chars
 */

char *str_concat(char *s1, char *s2)

{

	char *p;
	unsigned int x, y, k, l;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (x = 0; s1[x] != '\0'; x++)
	{
		;
	}
	for (y = 0; s2[y] != '\0'; y++)
	{
		;
	}
	p = malloc(sizeof(char) * (x + y + 1));

	if (p == NULL)
	{
		free(p);
		return (NULL);
	}
	for (k = 0; k < x; k++)
	{
		p[k] = s1[k];
	}
	l = y;

	for (y = 0; y <= l; k++, y++)
	{
		p[k] = s2[y];
	}
	return (p);
}

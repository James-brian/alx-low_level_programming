#include <stdio.h>
#include <stdlib.h>


/**
 * _strlen - find length of a string
 * @s: string
 * Return: int
 */

unsigned int _strlen(char *s)

{
	unsigned int size = 0;

	for (; s[size] != '\0'; size++)

		;

	return (size);
}


/**
 * *string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: first bytes of s2 to be used
 * Return: pointer or NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)

{
	unsigned int x, y;
	char *p;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	if (n < _strlen(s2))
		p = malloc(_strlen(s1) + n * sizeof(char) + 1);
	else
		p = malloc(_strlen(s1) + _strlen(s2) + 1);

	if (p == 0)
		return (NULL);

	for (x = 0; s1[x] != '\0'; x++)
		p[x] = s1[x];

	for (y = 0; s2[y] != '\0' && y < n; x++, y++)
		p[x] = s2[y];

	p[x] = '\0';

	return (p);
}

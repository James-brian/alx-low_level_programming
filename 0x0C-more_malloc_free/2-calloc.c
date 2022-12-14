#include <stdio.h>

#include <stdlib.h>

#include <string.h>

/**
 * _memset - copy char
 * @s: string
 * @b: input
 * @n: bytes
 * Return: string
 */

char *_memset(char *s, char b, unsigned int n)

{

	unsigned int x;

	for (x = 0; x < n; x++)

	{

		s[x] = b;

	}

	return (s);

}



/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: n elements
 * @size: bytes
 * Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)

{

	void *p;

	if (nmemb == 0 || size == 0)

		return (NULL);

	p = malloc(nmemb * size);

	if (p == NULL)

		return (NULL);

	_memset(p, 0, (nmemb * size));

	return (p);

}

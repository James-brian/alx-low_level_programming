#include <stdio.h>

/**
 * _strcat - concatenates  the string pointed to by @src to
 *
 * the end of the string pointed to by @dest
 *
 * @dest: String that will be appended
 *
 * @src: String to be concatenated upon
 *
 * Return: returns poiner to @dest
 */





char *_strcat(char *dest, char *src)

{

	int x, y;

	x = 0;

	y = 0;

		/*find the size of dest array*/

	while (dest[x])

	{

		x++;

	}



	for (y = 0; src[y] ; y++)

	{

		dest[x++] = src[y];

	}

	return (dest);

}

#include "main.h"

/**
 * _strcmp - a function that compares two strings
 *
 * @s1: string 1 input to compare
 *
 * @s2: against this other string 2
 *
 * Return: 0 if s1 and s2 are equal
 */



int _strcmp(char *s1, char *s2)

{

	int i;



	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)

	{

		if (s1[i] != s2[i])

		{

			return (s1[i] - s2[i]);

		}

	}

	return (0);

}

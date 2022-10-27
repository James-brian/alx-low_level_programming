#include "main.h"

/**
 * *string_toupper - string uppercase
 *
 * @str: pointer
 *
 * Return: uppercase
 */



char *string_toupper(char *str)

{

	int x;

	for (x = 0; str[x] != '\0'; x++)

	{

		if (str[x] <= 'z' && str[x] >= 'a')

		{

			str[x] -= 32;

		}

	}

	return (str);

}

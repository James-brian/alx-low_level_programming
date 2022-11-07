#include <stdio.h>


/**
 * isNum - checks if p is an integer
 *
 * @p: string to check
 *
 * Return: 0 or 1
 */

int isNum(const char *p)

{

	int x = 0;

	while (p[x] != '\0')

	{

		if (p[x] < '0' || p[x] > '9')

		{

			return (1);

		}

		x++;

	}

	return (0);

}



/**
 * main - adds positive numbers
 *
 * @argc: holds the number of arguments passed
 *
 * @argv: array pointer that holds the arguments passed
 *
 * Return: 0
 */


int main(int argc, char const *argv[])

{

	int sum = 0;

	while (--argc)

	{

		if (isNum(argv[argc]))

		{

			printf("Error\n");

			return (1);

		}

		sum += atoi(argv[argc]);

	}



	printf("%i\n", sum);



	return (0);

}

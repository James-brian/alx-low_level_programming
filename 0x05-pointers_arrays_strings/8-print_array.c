#include <stdio.h>



/**
 * print_array - print
 *
 * @a: int type array pointer
 *
 * @n: int type integer
 *
 * Description: Numbers must be separated by comma and space.
 *
 * Numbers should be displayed in the same order they are stored in array.
 *
 * You can only use _putchar to print.
 */



void print_array(int *a, int n)

{

	int x;

	x = 0;

	for (n--; n >= 0; n--, x++)

	{

		printf("%d", a[x]);

		if (n > 0)

		{

			printf(", ");

		}

	}

	printf("\n");

}

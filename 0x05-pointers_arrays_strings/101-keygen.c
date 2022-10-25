#include <stdio.h>

#include <stdlib.h>

#include <time.h>

/**
 * main - entry point generates a random password
 *
 * Return: the generated password
 */

int main(void)

{

	char ch;

	int y;



	srand(time(0));

	while (y <= 2645)

	{

		ch = rand() % 128;

		y += ch;

		putchar(ch);

	}

	putchar(2772 - y);

	return (0);

}

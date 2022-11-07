#include <stdio.h>


/**
 * main - prints the number of arguments passed into the program
 *
 * @argc: holds the number of arguments passed
 *
 * @argv: array pointer that holds the arguments passed
 *
 * Return: 0
 */

int main(int argc, char const *argv[])

{

	(void)argv;

	printf("%i\n", argc - 1);

	return (0);

}

#include <stdio.h>

/**
 * main - prints program name, followed by a new line
 *
 * @argc: holds the number of arguments passed
 *
 * @argv: array pointer that holds the arguments passed
 *
 * Return: 0
 */


int main(int argc, char const *argv[])

{

	(void)argc;

	printf("%s\n", argv[0]);

	return (0);

}

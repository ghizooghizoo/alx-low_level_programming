#include <stdio.h>

/**
 * main - prints the name of the program
 * @argc: number of arguments
 * @argv: command line arg
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", *argv);
	return (0);
}

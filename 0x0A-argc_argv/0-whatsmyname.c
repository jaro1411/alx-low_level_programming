#include <stdio.h>
#include <stdlib.h>

/**
 * main - function to print the name of the program
 * @argc: count of the arguments
 * @argv: the individual arguments to the main
 * Return: 0 for success
 */

int main(int __attribute__ ((unused)) argc, char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}

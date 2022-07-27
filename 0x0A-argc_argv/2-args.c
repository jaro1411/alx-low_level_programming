#include <stdio.h>
#include <stdlib.h>
/**
 * main- entry to the program
 * @argc: arguments count
 * @argv: string array
 * Return: 0 for success
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}

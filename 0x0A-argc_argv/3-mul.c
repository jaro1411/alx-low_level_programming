#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry to the program
 * @argc: count of the arguments
 * @argv: members of the string array
 * Return: 0 for successs
 */

int main(int argc, char *argv[])
{
	int num1, num2, mul;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	mult = num1 * num2;
	printf("%d\n", mult);
	return (0);
}


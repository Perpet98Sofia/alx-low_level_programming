#include <stdlib.h>
#include <stdio.h>

/**
 * main - multiplies two numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 1 if the program does not receive two arguments, otherwise return 0
 */

int main(int argc, char *argv[])
{
	int i, j, mul;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}

	i = atoi(argv[1]);
	j = atoi(argv[2]);
	mul = i * j;

	printf("%d\n", mul);
	return (0);
}

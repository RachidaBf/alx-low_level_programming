#include <stdio.h>
#include <stdlib.h>
/**
 * main -> program that multiplies two numbers.
 * @argc: arguments count
 * @argv: array that contains the program command line arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int a;
	int b;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	int res = a * b;

	printf("%d\n", res);
	return (0);
}


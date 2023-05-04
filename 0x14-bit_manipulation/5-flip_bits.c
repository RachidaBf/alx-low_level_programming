#include "main.h"

/**
 * flip_bits -> number of different bits between two numbers
 * @n: first number
 * @m: second number
 *
 * Return: number of bits you would need to flip
 * to get from one number to another.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int d, check;
	unsigned int i, j;

	i = 0;
	check = 1;
	d = n ^ m;
	for (j = 0; j < (sizeof(unsigned long int) * 8); j++)
	{
		if (check == (d & check))
			i++;
		check <<= 1;
	}
	return (i);
}

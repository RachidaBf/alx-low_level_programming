#include "main.h"
/**
 * get_bit -> function that returns the value of a bit at a given index
 * @n: number to check value
 * @index: index
 * Return: value of given index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	if (index > (sizeof(unsigned long int) * 8))
		return (-1);

	for (i = 0; i < index; i++)
	{
		n = n >> 1;
	}

	return (n & 1);
}


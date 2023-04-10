#include "main.h"
/**
 * clear_bit -> sets the valueof bit
 * @n: number
 * @index: index
 * Return: 1 if succeed, or -1 if an error occured
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int j;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	j = ~(1 << index);
	*n = *n & j;

	return (1);
}

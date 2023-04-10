#include "main.h"

/**
 * set_bit -> function that sets the value of a bit to 1 at a given index
 * @n: pointer of an unsigned long int
 * @index: index
 * Return: 1 if it worked, -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(n) * 8))
		return (-1);

	unsigned long int b = 1;

	b = b << index;
	*n = (*n | b);

	return (1);
}

#include "main.h"
/**
 * print_binary -> prints binary representaion of the numbers
 *  @n: number to prints its binary representaion
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
	}
	_putchar('0' + (n & 1));
}


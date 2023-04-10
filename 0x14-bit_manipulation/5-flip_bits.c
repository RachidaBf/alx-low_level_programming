#include "main.h"
/**
 * flip_bits - flip to get from a number to another
 * @n: first number
 * @m: second number
 * Return: the number of bits you would need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int d, f;
	unsigned int b, a;

	f = 1;
	b = 0;
	d = n ^ m;

	for (a = 0; a < (sizeof(unsigned long int) * 8); a++)
	{
		if (f == (d & f))
			b++;
		f <<= 1;
	}
	return (b);
}

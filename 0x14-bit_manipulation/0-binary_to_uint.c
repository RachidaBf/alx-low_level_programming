#include "main.h"

/**
 * binary_to_uint -> converts a binary to an unsigned int.
 * @b: point to a string of 0 and 1 chars
 * Return: the converted number, or 0
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int a;

	a = 0;
	if (!b)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}
	i = 0;
	while (b[i] != '\0')
	{
		a <<= 1;
		if (b[i] == '1')
			a += 1;
		i++;
	}
	return (a);
}

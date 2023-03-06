#include "main.h"
/**
 * _memset -> fills memory with a constant byte
 * @s: memory area
 * @n: the first byte of memory area
 * @b: constant byte
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; s[i] != '\0'; i++)

		if (s[i] == n)
		{
			b = n;
		}
	return (s);
}

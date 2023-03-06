#include "main.h"
/**
 * _strspn -> gets the length of a prefix substring
 * @s: prefix substring
 * @accept: input string
 * Return: number of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;

	while (accept[i] != '\0')
	{
		if (s[i] == accept[i])
			i++;
	}
	return (i);
}

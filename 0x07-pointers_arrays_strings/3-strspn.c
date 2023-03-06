#include "main.h"
/**
 * _strspn -> the length of a prefix substring
 * @s: prefix substring
 * @accept: string
 * Return: number of bytes in the initial segment of s.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
			if (s[i] == accept[j])
			{
				return (i);
			}
		return (i);
	}
	return (i);
}

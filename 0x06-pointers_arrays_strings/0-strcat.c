#include "main.h"
/**
 * _strcat -> Appends the src string to the dest string
 * @dest : dest string
 * @src: source string
 *
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int l = 0;

	while (dest[l] != '\0')
	{
		l++;
	}

		for (i = 0; src[i] != '\0'; i++)
		{
			dest[l++] = src[i];
		}
	dest[l] = '\0';
	return (dest);
}

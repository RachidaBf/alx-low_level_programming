#include "main.h"
#include <stdlib.h>
/**
 * _strdup - copy a string to a newly allocated space in memory
 * @str: string to copy
 *
 * Return: pointer to duplicated string or NULL if error
 */
char *_strdup(char *str)
{
	unsigned int len, j;
	char *s;

	if (str == NULL)
	{
		return (NULL);
	}
	for (len = 0; str[len] != '\0'; len++)
		;
	len++;
	s = malloc(len * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < len; j++)
	{
		s[j] = str[j];
	}
	return (s);
}

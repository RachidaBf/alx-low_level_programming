#include "main.h"
/**
 * _strcmp - compare 2 string
 * @s1:string
 * @s2:strmp
 * Return:integer
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] == s2[i])
	{
		if (s1[i] == '\0' || s2[i] == '\0')
			break;
		i++;
	}

	if ( s1[i] == '\0' && s2[i] == '\0')
	{
		return (0);
	}
	else
	{
		return (-1);
	}
}

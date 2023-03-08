#include "main.h"
/**
 * _strlen_recursion ->  returns the length of a string.
 * @s: string
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	int l;

	for (l = 0; s[l] != '\0'; l++)
		return (l);
}

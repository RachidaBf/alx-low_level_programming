#include "main.h"
/**
 * rev_string - reverses a string
 * _putchar - print each character
 * @s: char to check
 *
 * Description: This will reverse a string
 * Return: 0 is success
 */
void rev_string(char *s)
{
	int e = 0, f, g;
	char temp;

	while (s[e] != '\0')
	{
		e++;
	}
	g = e - 1;
	for (f = 0; g >= 0 && f < g; g--, f++)
	{
		temp = s[f];
		s[f] = s[g];
		s[g] = temp;
	}
}

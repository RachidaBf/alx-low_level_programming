#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: char array string type
 * description: can only use _putchar
 */
void print_rev(char *s)
{
	int i;
	int b;

	for (i = 0; s[i] != '\0'; i++)
		;


	for (b = i - 1; s[i] >= 0; b--)
	{
		_putchar(s[b]);
	}
	_putchar('\n');
}

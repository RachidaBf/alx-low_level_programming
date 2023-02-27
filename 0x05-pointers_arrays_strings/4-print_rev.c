#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: char array string type
 * description: can only use _putchar
 */
void print_rev(char *s)
{
	int i = 0;

	for (i = 0; s[i] != '\0'; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}

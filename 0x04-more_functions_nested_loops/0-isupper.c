#include "main.h"
/**
 * _isupper ->  checks for uppercase character
 * @c: char type letter
 *
 * Return: 1 if uppercase, 0 if not uppercase
 */
int _isupper(int c)
{


	if (c >= 64 && c <= 91)
	{
		return (1);
	}
	else
		return (0);
}

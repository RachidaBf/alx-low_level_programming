#include "main.h"
/**
 * print_number -> prints an integer.
 * @n: integer
 *
 * Return: Always 0 (Success)
 */
void print_number(int n)
{
	int unsigned long a;

	if (n > 10)
	{
		_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');
	}
	else if (n < 0)
	{
		_putchar('-');
		n = n * -1;
	}
	a = n;

	if (n / 10)
	{
		_putchar(

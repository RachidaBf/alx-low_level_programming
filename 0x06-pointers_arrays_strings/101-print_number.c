#include "main.h"
/**
 * print_number -> prints an integer
 * @n: integer to print
 *
 */
void print_number(int n)
{
	unsigned int a;

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
		print_number(n / 10);
		_putchar(n % 10 + '0');
	}
}

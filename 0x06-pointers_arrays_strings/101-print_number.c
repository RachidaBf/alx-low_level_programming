#include "main.h"
/**
 * print_number -> prints an integer
 * @n: integer to print
 *
 */
void print_number(int n)
{
	unsigned int a;


	if  (n < 0)
	{
		_putchar('-');
		n = n * -1;
	}
	a = n;

	if (a / 10)

		print_number(a / 10);
		_putchar(a % 10 + '0');

}

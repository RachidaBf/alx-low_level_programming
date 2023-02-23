#include "main.h"

/**
 * print_line - print a straight line using putchar of n size
 * @n: size of line
 */
void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;

		while (n < 0)
		{
			_putchar('\n');
		}
	}
}

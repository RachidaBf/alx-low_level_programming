#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 *
 * @n: Parameter
 * @l: Parameter
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int l;
	l = n % 10;

	_putchar(l + '0');
	return (0);
}

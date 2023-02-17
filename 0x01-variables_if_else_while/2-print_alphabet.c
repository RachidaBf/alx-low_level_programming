#include <stdio.h>
/**
 * main - A programme pints the alphabet in lowercase
 *
 * Return: 0
 */
int main(void)
{
	char az;

	for (az = 'a'; az <= 'z'; az++)
	{
		putchar("%c", az);
	}
	return (0);
}

#include<stdio.h>
/**
 * main - description: programme prints the alphabet in lowercase, and then
 * in uppercase
 * Return: 0
 */
int main(void)
{
	char c;
	char C;

	c = 'a';
	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	C = 'A';
	while (C <= 'Z')
	{
		putchar(C);
		C++;
	}
	putchar('\n');
	return (0);
}

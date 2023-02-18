#include<stdio.h>
/**
 * main - description: programme prints the alphabet in lowercase, and then
 * in uppercase
 * Return: 0
 */
int main(void)
{
	char c = 'a';
	char C = 'A';

		while ('a' <= 'z')
		{
			putchar(c);
			c++;
		}
	while ('A' <= 'Z')
	{
		putchar(C);
		C++;
	}
	putchar('\n');
	return (0);
}

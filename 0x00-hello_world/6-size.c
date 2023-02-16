#include<stdio.h>
/**
 * main - A programe that  the size of various types on the computer it is compiled and run on
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int e;
	float f;

printf("Size of a char: %ld byte(s)\n", (unsigned long)sizeof(a));
printf("Size of an int: %ld byte(s)\n", (unsigned long)sizeof(b));
printf("Size of a long int: %ld bytes(s)\n", (unsigned long)sizeof(c));
printf("Size of a long long int: %ld bytes(s)\n", (unsigned long)sizeof(e));
printf("Size of a float: %ld bytes(s)\n", (unsigned long)sizeof(f));
return (0);
}

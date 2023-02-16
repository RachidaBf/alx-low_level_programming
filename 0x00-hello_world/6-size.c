#include<stdio.h>
/**
 * main - A programe that  the size of various types on the computer
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int e;
	float f;

printf("Size of a char: %ld byte(s)\n", sizeof(a));
printf("Size of an int: %ld byte(s)\n", sizeof(b));
printf("Size of a long int: %ld byte(s)\n", sizeof(c));
printf("Size of a long long int: %ld byte(s)\n", sizeof(e));
printf("Size of a float: %ld byte(s)\n", sizeof(f));
return (0);
}

#include<stdio.h>
/**
 * main - A programe that  the size of various types on the computer it is compiled and run on
 * Return: Always 0 (Success)
 */
int main(void)
{
	char charType;
	int integerType;
	long int longintType;
	long long int lliType;
	float floatType;

printf("Size of char: %ld byte\n", (unsigned long)sizeof(charType));
printf("Size of int: %ld bytes\n", (unsigned long)sizeof(integerType));
printf("Size of long int: %ld bytes\n", (unsigned long)sizeof(longintType));
printf("Size of long long int: %ld bytes\n", (unsigned long)sizeof(lliType));
printf("Size of float: %ld bytes\n", (unsigned long)sizeof(floatType));
return (0);
}

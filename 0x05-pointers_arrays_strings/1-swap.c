#include "main.h"
/**
 * swap.c - function swaps the values of two integers
 * @a: first pointer
 * @b: second pointer
 */
void swap_int(int *a, int *b)
{
	swap(&a ,&b);
	
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

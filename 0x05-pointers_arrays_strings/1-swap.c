#include "main.h"
/**
 * swap_int - swaps value of two integers
 * @a: int 1 to be swapped
 * @b: int 2 to be swapped
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int p;

	p = *a;
	*a = *b;
	*b = p;
}

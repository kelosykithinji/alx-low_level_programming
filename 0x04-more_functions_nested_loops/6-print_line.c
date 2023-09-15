#include "main.h"

/**
 *print_line - draws a straight line in the terminal
 *@n: number of times the character _ should be printed
 *Return: void
 */

void print_line(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int p;

		for (p = 1 ; p <= n ; p++)
			_putchar('_');
		_putchar('\n');
	}
}


#include "main.h"

/**
 *print_diagonal - draws a diagonal line on the terminal
 *@n: number of times the character '\' should be printed
 *Return: void
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		int p, k;

		for (p = 0; p < n; p++)
		{
			for (k = 0; k < n; k++)
			{
				if (k == p)
					_putchar('\\');
				else if (k < p)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}


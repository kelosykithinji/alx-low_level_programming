#include "main.h"
/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: size of the triangle
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int p, k;

		for (p = 1; p <= size; p++)
		{
			for (k = p; k < size; k++)
			{
				_putchar(' ');
			}

			for (k = 1; k <= p; k++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
}




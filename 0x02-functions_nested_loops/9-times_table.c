#include "main.h"
/**
 *times_table - prints the 9 times table
 *Return: void
 */
void times_table(void)
{
	int r, c, i;

	for (r = 0 ; r < 10 ; r++)
	{
		for (c = 0 ; c < 10 ; c++)
		{
			i = r * c;
			if (c == 0)
			{
				_putchar(i + '0');
			}

			if (i < 10 && c != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(i + '0');
			}
			else if (i >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((i / 10) + '0');
				_putchar((i % 10) + '0');
			}
		}
		_putchar('\n');
	}
}


#include "main.h"
/**
 *more_numbers - prints 10 times the numbers, from 0 to 14
 *Return: void
 */
void more_numbers(void)
{
	int p;
	int k;

	for (p = 0 ; p < 10 ; p++)
	{
		for (k = 0 ; k < 15 ; k++)
		{
			if (k > 9)
				_putchar(k / 10 + '0');
			_putchar(k % 10 + '0');
		}
	_putchar('\n');
	}
}

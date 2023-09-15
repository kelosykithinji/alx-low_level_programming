#include "main.h"
/**
 *print_most_numbers - prints number 0 to 9, excluding 2 and 4
 *Return: void
 */
void print_most_numbers(void)
{
	int p;

	for (p = 0 ; p < 10 ; p++)
	{
		if (p != 2 && p != 4)
			_putchar(p + '0');
	}
	_putchar('\n');
}


#include "main.h"
/**
 *print_numbers - prints the numbers, from 0 to 9, followed by a new line
 *Return: void
 */

void print_numbers(void)
{
	char p;

	for (p = '0' ; p <= '9' ; p++)
	{
		_putchar(p);
	}
	_putchar('\n');
}

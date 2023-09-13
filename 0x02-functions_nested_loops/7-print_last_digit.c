#include "main.h"
/**
 *print_last_digit - prints the last digit of a number
 *@p: parameter
 *Return: i
 */
int print_last_digit(int p)
{
	int i;

	i = p % 10;
	if (p < 0)
		i = -i;
	_putchar(i + '0');
	return (i);
}

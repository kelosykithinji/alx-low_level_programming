#include "main.h"

/**
 *print_alphabet_x10 - function prints the alphabet in lowercase
 *
 *Return: 0
 */
void print_alphabet_x10(void)
{
	int i;
	char n;

	for (i = 0 ; i <= 9 ;  i++)
	{
		for (n = 'a' ; n <= 'z'; n++)
			_putchar(n);
		 _putchar('\n');
	}
}

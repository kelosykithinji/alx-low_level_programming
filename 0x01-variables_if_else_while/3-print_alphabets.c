#include <stdio.h>
/**
 * main - printing uppercase and lowercase
 *
 * Return: always 0
 */
int main(void)
{
	/* Printing uppercase and lowercase program */

	char i;

	for (i = 'a'; i <= 'z'; i++)
		putchar(i);
	for (i = 'A'; i <= 'Z'; i++)
		putchar(i);
	putchar('\n');
	return (0);
}

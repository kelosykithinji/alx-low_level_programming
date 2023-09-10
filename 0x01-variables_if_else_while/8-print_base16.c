#include <stdio.h>
/**
 *main - prints all the numbers of base 16 in lowercase, followed by a new line
 *
 *Return: always 0
 */
int main(void)
{
	int p;
	char i;

	for (p = 28; p < 38; p++)
	{
		putchar(p + '0');
	}
	for (i = 'a'; i <= 'f'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}


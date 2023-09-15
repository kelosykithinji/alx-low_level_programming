#include <stdio.h>
#include <math.h>

/**
 * main - finds prints largest prime factor of the number 612852475143
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int p;
	long int max;
	long int k;

	p = 612852475143;
	max = -1;

	while (p % 2 == 0)
	{
		max = 2;
		p /= 2;
	}

	for (k = 3; k <= sqrt(p); k = k + 2)
	{
		while (p % k == 0)
		{
			max = k;
			p = p / k;
		}
	}

	if (p > 2)
		max = p;

	printf("%ld\n", max);

	return (0);
}



#include <stdio.h>
#include "main.h"
/**
 * _abs - computes the absolute value of an integer
 *@p: parameter to be used
 *
 *Return: -p or p;
 */
int _abs(int p)
{
	if (p < 0)
		return (-p);
	else if (p > 0)
	{
		return (p);
	}
	return (0);
}

#include "main.h"
/**
 *_isupper - checks for uppercase character *Return:
 *@c: parameter
 *Return: 1 upon success 0 upon failure
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

#include "main.h"

/**
 * _isupperr - fn to check for uppercase character
 * @c: parameter c
 * Return: returns number of repetition
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}

#include "main.h"

/**
* print_line - fn to draws a straight line in the terminal
* @n: parameter
* Return: 0 is success
*/
void print_line(int n)
{
	int x;

	for (x = 0; x <= n; x++)
	{
		_putchar('_');
	}
	_putchar('\n');
}

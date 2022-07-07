#include "main.h"

/**
* print_diagonal - draws a diagonal line on the terminal.
* @n: value to use
* Return: no
*/
void print_diagonal(int n)

{
	int x;
	int y;

	for (x = 0; x < n; x++)
	{
	for (y = 0; y < x; y++)
	{
		_putchar(' ');
	}
	if (x < n)
	{
		_putchar(92);
		_putchar('\n');
	}
	}
	_putchar('\n');
}

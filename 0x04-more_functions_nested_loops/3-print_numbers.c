#include "main.h"

/**
* print_numbers - fn to print numbers
* Return: 0 is success
*/
void print_numbers(void)
{
	int c;

	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}

#include <stdio.h>

/**
 * main - entry point
 * Return: 0 is success
 */
int main(void)
{
	char a = 'a';
	char z = 'z';

	while (z >= a)
	{
		putchar(z);
		z--;
	}
	putchar('\n');
	return (0);

}

#include <stdio.h>

/**
 * main - entry point
 * Return: 0 is success
 */
int main(void)
{
	char a = 'a';
	char z = 'z';
	char A = 'A';
	char Z = 'Z';

	while (a <= z)
	{
		putchar(a);
		a++;
	}

	while (A <= Z)
	{
		putchar(A);
		A++;
	}

	putchar('\n');
	return (0);
}

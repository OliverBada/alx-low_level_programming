#include <stdio.h>

/**
 * main - entry point
 * Return: 0 is success
 */
int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		printf("%d", i);
	}
	putchar('\n');
	return (0);
}

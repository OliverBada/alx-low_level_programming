#include <stdio.h>

int main void
{

	int a = 1;

	while (a <= 100)
	if (a % 3 == 0)
	{
		printf(" Fizz");
		a++;
	}
	else if (a % 5 == 0)
	{
		printf(" Buzz");
		a++;
	}
	else
	{
		printf(" %d", a);
		a++;
	}
	return (0);
}
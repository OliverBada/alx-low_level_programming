#include <stdio.h>
#include "main.h"

/**
* main - program that prints its name
* @argc: counts nuber of arguments
* @argv: the program name
* Return: zero is success
*/
int main(int argc, char *argv[])
{
	int num_1, num_2, mul;

	if (argc != 3)
		printf("Error\n");
	else
	{
		num_1 = atoi(argv[1]);
		num_2 = atoi(argv[2]);
		mul = num_1 * num_2;
		printf("%d\n", mul);
	}
	return (0);
}

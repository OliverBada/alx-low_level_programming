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
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}

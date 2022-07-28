#include "main.h"
#include<stdlib.h>
/**
 * malloc_checked - allocates memory using malloc
 * @b: size of memory to allocate
 *
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	int *mem;

	mem = malloc(sizeof(b));
	if (mem == NULL)
		exit(98);
	return (mem);
}

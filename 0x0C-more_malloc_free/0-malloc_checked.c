#include "main.h"

/**
 * malloc_checked - allocates memory using malloc, exit(98) if it fails
 * @b: size of the memory block to be allocated
 * Return: pointer to the array
 */
void *malloc_checked(unsigned int b)
{
void *arr;

arr = malloc(b);
if (arr == NULL)
exit(98);
return (arr);
}

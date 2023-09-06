#include "main.h"

/**
 * create_array - creates an array of chars and fills it with c
 * @size: size of the array to be created.
 * @c: character to fill the newly creates array with.
 * Return: NULL if: size is 0 or the function fails, else
 * pointer to the newly created array.
*/
char *create_array(unsigned int size, char c)
{
int i = 0, size_in_bytes = size * sizeof(c);
char *arr = (char *)malloc(size * sizeof(c));
if (size == 0 || arr == NULL)
return (NULL);
for ( ; i < size_in_bytes; i++)
*(arr + i) = c;
return (arr);
}


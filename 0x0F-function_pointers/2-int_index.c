#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array to be searched
 * @size: number of elements within array
 * @cmp: pointer to  a function that returns an int
 * Return: -1 on bad days, ret on good days
*/
int int_index(int *array, int size, int (*cmp)(int))
{
int i = 0, ret = -1;
if (size <= 0)
return (-1);
if (array == NULL || cmp == NULL)
return (-1);
for ( ; i < size; i++)
{
if (cmp(array[i]) !=  0)
{
ret = i;
break;
}
}
if (ret < 0)
return (-1);
else
return (ret);
}

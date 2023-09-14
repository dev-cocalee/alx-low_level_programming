#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter on each element
 * of an array
 * @array: given array
 * @size: size of array
 * @action: pointer to the needed function
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i = 0;
if (array == NULL || action == NULL)
return;
if (size <= 0)
return;
if (array != NULL)
{
for ( ; i < size; i++)
action(array[i]);
}
}

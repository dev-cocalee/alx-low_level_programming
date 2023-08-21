#include "main.h"

/**
 * swap_int - swaps the vlue of two confused integers
 * @a: pointer to the first confused mf
 * @b: the second born
*/
void swap_int(int *a, int *b)
{
*a ^= *b, *b ^= *a, *a ^= *b;
}

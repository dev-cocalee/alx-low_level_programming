#include "main.h"

/**
 * print_array - prints n elements of array a
 * @a: the array whose n elements are to be printed
 * @n: duhhhhh
*/
void print_array(int *a, int n)
{
int i = 0;
for ( ; i < n; i++)
{
printf("%d", a[i]);
if (i != n - 1)
printf(", ");
}
printf("\n");
}

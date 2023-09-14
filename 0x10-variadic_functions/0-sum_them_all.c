#include "variadic_functions.h"

/**
 * sum_them_all - claculates and returns the sum of its parameters
 * @n: variadic argument, reps number of arguments
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
size_t i = 0;
int sum = 0;
va_list ments;

if (n == 0)
return (0);

va_start(ments, n);
for ( ; i < n; i++)
sum += va_arg(ments, int);

va_end(ments);
return (sum); }

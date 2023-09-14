#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @separator: string seperator
 * @n: variadic argument, count of integers passed to print_numbers
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
size_t i = 0;
va_list(ments);
va_start(ments, n);

for ( ; i < n; i++)
{
printf("%d", va_arg(ments, int));
if (separator != NULL && i != (n - 1))
printf("%s", separator);
}
printf("\n");
va_end(ments);
}

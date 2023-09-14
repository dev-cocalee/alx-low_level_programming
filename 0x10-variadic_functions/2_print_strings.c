#include "variadic_functions.h"

/**
 * print_strings - prints strings followed by a newline
 * @separator: seperating string
 * @n: number of strings passed into the function
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
size_t i = 0;
va_list ments;
va_start(ments, n);

if (n > 0)
{
for ( ; i < n; i++)
{
if (separator[i + 1] != '\0')
printf("%c%c ", va_arg(ments, int), separator[i]);
else
printf("%c", va_arg(ments, int)); }}}

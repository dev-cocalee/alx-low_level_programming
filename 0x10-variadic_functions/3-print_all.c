#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: variadic argument and list of arguments to the function
 */
#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

void print_all(const char *const format, ...)
{
size_t i = 0;
char *d;
va_list ments;

va_start(ments, format);

while (format[i] && format)
{
(format[i] == 'c') ? printf("%c", va_arg(ments, int))
: (format[i] == 'i') ? printf("%d", va_arg(ments, int))
: (format[i] == 'f') ? printf("%f", va_arg(ments, double))
: (format[i] == 's') ? (d = va_arg(ments, char *),
(d == NULL) ? printf("(nil)") : printf("%s", d))
: 0;

if ((format[i] == 's' || format[i] == 'f' || format[i] == 'c' ||
format[i] == 'i') && format[i + 1] != '\0')
printf(", ");
i++;
}

printf("\n");
va_end(ments);
}

int main(void)
{
print_all(NULL);
return (0);
}
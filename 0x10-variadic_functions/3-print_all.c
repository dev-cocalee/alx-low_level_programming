#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: variadic argument and list of arguments to the function
 */
void print_all(const char *const format, ...)
{
size_t i = 0;
char *d;
va_list ments;
va_start(ments, format);

if (format == NULL)
{
printf("\n");
return;
}

while (format[i] && format)
{
switch (format[i])
{
case 'c':
printf("%c", va_arg(ments, int));
break;
case 'i':
printf("%d", va_arg(ments, int));
break;
case 'f':
printf("%f", va_arg(ments, double));
break;
case 's':
d = va_arg(ments, char *);
if (d == NULL)
d = "(nil)";
printf("%s", d);
}
if ((format[i] == 's' || format[i] == 'f' ||
format[i] == 'c' || format[i] == 'i') && format[i + 1] != '\0')
printf(", ");
i++;
}
printf("\n");
va_end(ments);
}

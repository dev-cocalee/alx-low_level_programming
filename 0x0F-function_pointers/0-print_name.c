#include "function_pointers.h"

/**
 * print_name - prints a name.
 * @name: what to print
 * @f: pointer to function that returns void
 */
void print_name(char *name, void (*f)(char *))
{
if (name != NULL && f != NULL)
f(name);
}

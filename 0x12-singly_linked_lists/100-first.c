#include "lists.h"

/**
 * print_before_main - executes before the main function...googled my ass
 * out for this one
 */
void __attribute__((constructor)) print_before_main()
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}

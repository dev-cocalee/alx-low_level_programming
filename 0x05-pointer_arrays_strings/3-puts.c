#include "main.h"

/**
 * _puts - prints a string to stdout
 * str: string to be printed
*/
void _puts(char *str)
{
int i = 0;
for ( ; *(str + i); i++)
_putchar(*(str + i));
_putchar(10);
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *str;

    str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
    _puts(str);
    return (0);
}

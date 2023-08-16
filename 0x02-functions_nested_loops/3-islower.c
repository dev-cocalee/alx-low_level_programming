#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c: ascii value of character to be checked
 * Return: 1 if c is lowercase otherwise 0
*/
int _islower(int c)
{
if (c < 123 && c > 96)
return(1);
return (0);
}

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = _islower('H');
    _putchar(r + '0');
    r = _islower('o');
    _putchar(r + '0');
    r = _islower(108);
    _putchar(r + '0');
    _putchar('\n');
    return (0);
}

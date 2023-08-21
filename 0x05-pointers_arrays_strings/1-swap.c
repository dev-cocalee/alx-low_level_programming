#include "main.h"

/**
 * swap_int - swaps the vlue of two confused integers
 * @a: pointer to the first confused mf
 * @b: the second born
*/
void swap_int(int *a, int *b)
{
*a ^= *b, *b ^= *a, *a ^= *b;
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int a;
    int b;

    a = 98;
    b = 42;
    printf("a=%d, b=%d\n", a, b);
    swap_int(&a, &b);
    printf("a=%d, b=%d\n", a, b);
    return (0);
}

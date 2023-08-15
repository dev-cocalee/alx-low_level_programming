#include <stdio.h>

/**
 * main - prints lowercase alphabet in reverse
 * Return: 0
*/
int main(void)
{
char c = 122;
while (c > 96)
putchar(c), c--;
putchar('\n');
return (0);
}

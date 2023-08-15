#include <stdio.h>

/**
 * main - prints the alphabet in lower case
 * Return: 0
*/
int main(void)
{
char c = 97;
while (c < 123)
putchar(c), c++;
putchar('\n');
return (0);
}

#include "main.h"

/**
 * main - prints its own name, followed by a new line
 * @argc: size of argv
 * @argv: array of size argc
 * Return: 0
*/
int main(int argc __attribute__((unused)), char **argv)
{
int i = 0;
for ( ; argv[0][i] != '\0'; i++)
{
putchar(argv[0][i]);
}
putchar('\n');
return (0);
}

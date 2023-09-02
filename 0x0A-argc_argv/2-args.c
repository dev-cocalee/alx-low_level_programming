#include "main.h"

/**
 * main - prints all the arguments it receives
 * @argc: size of argv
 * @argv: array of size argc
 * Return: argv(s)
*/
int main(int argc, char **argv)
{
int i = 0, j = 0;
for ( ; i < argc; i++)
{
for ( ; argv[i][j] != '\0'; j++)
putchar(argv[i][j]);
j = 0;
putchar('\n');
}
return (0);
}

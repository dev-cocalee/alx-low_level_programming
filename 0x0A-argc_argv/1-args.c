#include "main.h"

/**
 * main - prints number of arguments passed to it
 * @argc: size of argv
 * @argv: array of size argc
 * Return: argc
*/
int main(int argc, char **argv __attribute__((unused)))
{
char i = argc;
_putchar((i + 48) - 1);
_putchar('\n');
return (0);
}

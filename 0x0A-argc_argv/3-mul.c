#include "main.h"

/**
 * main - multiplies two numbers passed to it as argument
 * @argc: size of argv
 * @argv: array of size argc
 * Return: 1 if argc <= 2 else 0
*/
int main(int argc, char **argv)
{
int number, mul = 1, i = 1;
if (argc <= 2)
{
printf("Error\n");
return (1);
}
for ( ; i < argc; i++)
{
number = atoi(argv[i]);
mul *= number;
}
printf("%d\n", mul);
return (0);
}

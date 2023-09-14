#include <stdio.h>
#include <stdlib.h>

/**
*main -  program that prints the opcodes of its own main function.
*@argc: argument count
*@argv: argument vectors
*Return: 2 if it fails else 1
*/
int main(int argc, char *argv[])
{
int in, b;
int (*address)(int, char **) = main;
unsigned char opcode;

if (argc != 2)
{
printf("Error\n");
exit(1);
}
b = atoi(argv[1]);

if (b < 0)
{
printf("Error\n");
exit(2);
}

for (in = 0; in <  b; in++)
{
opcode = *(unsigned char *)address;
printf("%.2x", opcode);

if (in == b - 1)
continue;
printf(" ");
address++;
}
printf("\n");
return (0);
}

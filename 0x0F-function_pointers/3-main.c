#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - does simpe operations
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
*/
int main(int argc, char **argv)
{
int op1, op2, ret_value;
char *op = argv[2];
int (*op_ptr)(int, int);
/*Conditions*/
if (argc != 4)
{
printf("Error\n");
exit(98);
}
if (!(strcmp(op, "+") == 0 || strcmp(op, "-") == 0 || strcmp(op, "*") == 0
|| strcmp(op, "/") == 0 || strcmp(op, "%") == 0))
{
printf("Error\n");
exit(99);
}
if ((strcmp(op, "/")  == 0 || strcmp(op, "%") == 0) && (atoi(argv[3])) == 0)
{
printf("Error\n");
exit(100);
}
op1 = atoi(argv[1]), op2 = atoi(argv[3]);
op_ptr = get_op_func(op);
ret_value = op_ptr(op1, op2);
printf("%d\n", ret_value);
return (0);
}

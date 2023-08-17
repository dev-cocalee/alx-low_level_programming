#include "main.h"

/*
 * main - computes and prints sum of all mutiples of 3 and 5 below 1024
 * Return: 0

int main(void)
{
int sum = 0, mul = 1, i_checker, check;
float f_checker;
for ( ; mul < 1024; mul++, check = 0)
{
f_checker = mul / 3, i_checker = mul / 3;
if (f_checker == i_checker)
sum += mul, check = 1;

f_checker = mul / 5, i_checker = mul / 5;
if ((f_checker == i_checker) && check != 1)
sum += mul;
}
printf("sum = %d\n", sum);
return (0);
}
This works too, without the mod operator
*/

#include "main.h"

/**
 * main - computes and prints sum of all mutiples of 3 and 5 below 1024
 * Return: 0
*/
int main(void)
{
int sum = 0, mul = 1;
for ( ; mul < 1024; mul++)
{
if (mul % 3 == 0|| mul % 5 == 0)
sum += mul;
}
printf("sum = %d\n", sum);
return (0);
}

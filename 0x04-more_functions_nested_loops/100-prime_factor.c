#include "main.h"

/**
*main- prints the largest prime facto *of a number
*Return: 0
*/
int main(void)
{
long number = 612852475143, reand;
while (reand++ < number / 2)
{
if (number % reand == 0)
{
number /= 2;
continue;
}

for (reand = 3; reand < number / 2; reand += 2)
{
if (number % reand == 0)
number /= reand;

}
}
printf("%ld\n", number);
return (0);
}

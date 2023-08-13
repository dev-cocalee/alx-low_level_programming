#include <stdio.h>
#include <unistd.h>

/**
 * main - prints some words...yeah, we're still on this
 * Return: 1
*/
int main(void)
{
char *val = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
int i = 0;

for ( ; val[i]; i++)
write(2, val + i, 1);

return (1);
}

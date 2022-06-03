#include<stdio.h>
#include <stdlib.h>
#include<ctype.h>
/**
 * main - main block
 * Return: 0
 */
int main(void)
{
int i, j = 44;
for (i = 0; i < 10; i++)
{
if (i <= 8)
{
putchar(i % 10 + '0');
putchar(j + ' ');
}
else if (i == 9)
{
putchar(i % 10 + '0');
}
}
return (0);
}


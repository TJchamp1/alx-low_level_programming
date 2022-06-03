#include<stdio.h>
#include <stdlib.h>
#include<ctype.h>
/**
 * main - main block
 * Return: 0
 */
int main(void)
{
int i;
for (i = 0; i < 16; i++)
{
if (i < 10)
{
putchar(i % 10 + '0');
}
else if (i >= 10)
{
putchar(i);
}
}
putchar('\n');
return (0);
}


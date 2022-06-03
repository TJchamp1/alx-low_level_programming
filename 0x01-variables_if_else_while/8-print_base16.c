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
for (i = 0; i < 10; i++)
putchar(i % 10 + '0');

for (i = 97; i <= 102; i++)
putchar(i);
putchar('\n');
return (0);
}


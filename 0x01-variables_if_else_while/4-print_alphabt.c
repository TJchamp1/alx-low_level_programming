#include<stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Return: 0
 */
int main(void)
{
int n = 122, i;
for (i = 97; i <= n; i++)
{
if (i == 101 || i == 113)
continue;
putchar(i);
}
putchar('\n');
return (0);
}

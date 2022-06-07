#include "main.h"
#include<stdio.h>
/**
 * funtion - funtction block
 * Return: noting
*/
void print_to_98(int n)
{
int i, j = 98;
if (n > 98)
{
for (i = n; i < 98; i++)
{
printf("%d, ", i);
}
printf("98\n");
}
else
{
for (i = n; i > 98; i--)
{
printf("%d, ", i);
}
printf("%d\n", j);
}
}


#include "main.h"
#include<stdio.h>
/**
 * funtion - funtction block
 * Return: noting
*/
void print_to_98(int n)
{
int i;
if (n > 98)
{
for (i = n; i < 98; i++)
{
printf("%d, ", i);
}
printf("98");
}
else
{
for (i = n; i > 98; i--)
{
printf("%d, ", i);
}
printf("98");
}
}


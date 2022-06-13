#include "main.h"
#include<stdio.h>
#include<string.h>
/**
 * print_array - function
 * @a: will be used
 * @n: will be used
 */
void print_array(int *a, int n)
{
int i;
if (n <= 1)
{
printf("\n\n");
}
else 
{
for (i = 0; i < n - 1; i++)
{
printf("%d, ", a[i]);
}
printf("%d\n", a[n - 1]);
}
}

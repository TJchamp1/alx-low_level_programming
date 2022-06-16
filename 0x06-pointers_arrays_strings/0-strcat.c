#include "main.h"
#include<string.h>
/**
 * more_numbers - function
 * Return: noting
 */
char *_strcat(char *dest, char *src)
{
int n, i, n2, j = 0;
n = strlen(dest);
n2 = strlen(src);
for (i = n + 1; i <= n2; i++)
{
dest[i] = src[j];
j++;
}
return (*dest);
}

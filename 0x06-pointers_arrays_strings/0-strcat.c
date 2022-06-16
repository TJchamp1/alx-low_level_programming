#include "main.h"
#include<string.h>
/**
 * *_strcat - function
 * @dest: will be used
 * @src: will be used
 * Return: noting
 */
char *_strcat(char *dest, char *src)
{
int n, i, n2, j = 0;
n = strlen(dest);
n2 = strlen(src);

for (i = n; i <= n2; i++)
{
if (i == n)
{
dest[i] = 'a';
}
else
{
dest[i] = src[j];
}
j++;
}
return (dest);
}

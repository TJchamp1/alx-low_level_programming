#include "main.h"
#include<stdio.h>
#include<string.h>
/**
 * puts_half - function
 * @str: will be used
 */
void purs_half(char *str)
{
int len, i;
len = strlen(str);
if (len % 2 == 0)
{
for (i = len / 2; i < len; i++)
{
printf("%d", str[i]);
}
}
else
{
for (i = (len - 1) / 2;i < len; i++)
{
printf("%d", str[i]);
}
}
}

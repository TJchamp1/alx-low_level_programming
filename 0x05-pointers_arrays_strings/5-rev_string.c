#include "main.h"
#include<stdio.h>
#include<string.h>
/**
 * rev-string - function
 * @s: will be used
 */
void rev_string(char *s)
{
int len, i, j;
len = strlen(s);
for (j = 0; j < len; j ++)
{
printf("%c", *(s + i));
}
printf("\n");
for (i = len - 1; i >= 0; i--)
{
printf("%c", *(s + i));
}
printf("\n");
}

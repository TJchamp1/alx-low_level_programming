#include "main.h"
#include<stdio.h>
#include<string.h>
/**
 * rev_string - function
 * @s: will be used
 */
void rev_string(char *s)
{
int len, j;
len = strlen(s);
for (j = 0; j < len; j++)
{
printf("%c", *(s + j));
}
printf("\n");
}

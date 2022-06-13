#include "main.h"
#include<stdio.h>
#include<string.h>
/**
 * rev_string - function
 * @s: will be used
 */
void rev_string(char *s)
{
int len, i;
len = strlen(s);
for (i = len - 1; i >= 0; i--)
{
printf("%c", *(s + i));
if (i == 0)
break;
}
printf(strrev(s));
}

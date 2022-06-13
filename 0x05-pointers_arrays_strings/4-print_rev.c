#include "main.h";
#include<stdio.h>
#include<string.h>

void print_rev(char *s)
{
int len, i;
len = strlen(s);
for (i = len; i >= 0; i--)
{
printf("%c", *(s + i));
}
printf("\n");
}

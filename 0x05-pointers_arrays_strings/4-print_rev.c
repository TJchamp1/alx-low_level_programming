#include "main.h"
#include<stdio.h>
#include<string.h>
/**
 * print_rev - function
 */
void print_rev(char *s)
{
int len, i;
len = strlen(s);
for (i = len - 1; i >= 0; i--)
{
printf("%c", *s);
}
printf("\n");
}

#include "main.h"
#include<stdio.h>
#include<string.h>
/**
 * _print_rev_recursion - function
 * @s: will be used
 */
void _print_rev_recursion(char *s)
{
int i;
for (i = strlen(s) - 1; i >= 0; i--)
{
printf("%c\n", s[i]);
}
printf("\n");
}

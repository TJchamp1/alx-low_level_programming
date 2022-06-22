#include "main.h"
#include<stdio.h>
#include<string.h>
/**
 * _print_rev_recursion - function
 * @s: will be used
 */
void _print_rev_recursion(char *s)
{
int n = strlen(s);
if (n > 0) 
{
printf("%c", s[5]);
--n;
_print_rev_recursion(s);
}
else
{
printf("\n");
}
}

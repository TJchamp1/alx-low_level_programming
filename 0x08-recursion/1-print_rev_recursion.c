#include "main.h"
#include<stdio.h>
#include<string.h>
/**
 * _print_rev_recursion - function
 * @s: will be used
 */
void _print_rev_recursion(char *s)
{
if (s != '\n') 
{
_print_rev_recursion();
printf("%c", s);
}
}

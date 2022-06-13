#include "main.h"
#include<stdio.h>
#include<string.h>
/**
 * rev-string - function
 * @s: will be used
 */
void rev_string(char *s)
{
printf("%s\n", *s);
strrev(*s);
printf("%s\n", *s);
}

#include<stdio.h>
#include <stdlib.h>
#include <time.h>
#include<ctype.h>
/**
 * main - main block
 * Return: 0
 */
int main(void)
{
int n = 122, i;
for (i = 97; i <= n; i++)
putchar(i);
for (i = 97; i <= n; i++)
putchar(toupper(i));
putchar('\n');
return (0);
}


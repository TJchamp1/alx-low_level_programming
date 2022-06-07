#include<stdio.h>
#include <stdlib.h>
#include <time.h>
/** 
 * main - main block
 * Return: 0
 */
int main(void)
{
print_alphabet();
return (0);
}
print_alphabet(void)
{
int i;
for (i = 0; i <= 122; i++ )
{
putchar(i);
}
}

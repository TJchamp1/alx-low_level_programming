#include<stdio.h>
#include <stdlib.h>
#include <time.h>
/** 
 * main - main block
 * Return: 0
 */
print_alphabet(void)
{
int i;
for (i = 0; i <= 122; i++ )
{
putchar(i);
}
}
int main(void)
{
print_alphabet();
return (0);
}

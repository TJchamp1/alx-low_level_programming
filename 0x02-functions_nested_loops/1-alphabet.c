#include<stdio.h>
/** 
 * main - main block
 * Return: 0
 */
void print_alphabet(void)
{
int i;
for (i = 0; i <= 122; i++ )
{
putchar(i);
}
putchar('\n');
}
int main(void)
{
print_alphabet();
return (0);
}

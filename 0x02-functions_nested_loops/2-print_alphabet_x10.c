#include "main.h"
/**
* print_alphabet_x10 - funtction that prints alphabets 10 times
* @n: helps to do the loop 
* Return: noting but prints all
*/
void  print_alphabet_x10(void)
{
int i, j;
for (j = 0; j < 10; j++)
{
for (i = 97; i <= 122; i++)
{
_putchar(i);
}
_putchar('\n');
}
}

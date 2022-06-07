#include "main.h"
/**
 * funtion - funtction block
 * Return: noting
*/
void print_to_98(int n)
{
int i;
if (n > 98)
{
for (i = n; i < 98; i++)
{
_putchar('i' + '0');
_putchar(',');
_putchar(' ');
}
_putchar(98 + '0');
}
else
{
for (i = n; i > 98; i--)
{
_putchar('i' + '0');
_putchar(',');
_putchar(' ');
}
_putchar(98 + '0');
}
}


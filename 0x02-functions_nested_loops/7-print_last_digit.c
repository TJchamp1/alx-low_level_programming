#include "main.h"
/**
 * funtion - funtction block
 * Return: noting
*/
int print_last_digit(int c)
{
int last;
if (n < 0)
{
c = (-1) * c;
last = c % 10;
_putchar(last + '0');
return (last);
}
else
{
last = c % 10;
_putchar(last + '0');
return (last);
}
}

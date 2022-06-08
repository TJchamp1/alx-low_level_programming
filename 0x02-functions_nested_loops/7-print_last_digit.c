#include "main.h"
/**
* print_last_digit - function that prints the last digit
* @c: integer
* Return: @c the value of the last digit
*/
int print_last_digit(int c)
{
int last;
if (c < 0)
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

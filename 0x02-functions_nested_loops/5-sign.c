#include "main.h"
/**
 * funtion - funtction block
 * Return: noting
*/
int print_sign(int n)
{
if (n > 0)
{
_putchar('1');
_putchar('\n');
return (1);
}
else if (n == 0)
{
_putchar('0');
_putchar('\n');
return (0);
}
else
{
_putchar('-');
_putchar('\n');
return (-1);
}
}

#include<stdlib.h>
#include "main.h"
/**
* print_last_digit - function that prints the last digit
* @c: integer
* Return: @c the value of the last digit
*/
int print_last_digit(int c)
{
int last;
last = abs(c % 10);
_putchar(last + '0');
return (last);
}

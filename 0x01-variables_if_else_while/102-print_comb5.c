#include <stdio.h>
/**
 * main - Print combinations of two digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int tow, hunds, tens, ones, j = 1;
for (tow = 0; tow <= 9; tow++)
{
for (hunds = 0; hunds <= 9; hunds++)
{
for (tens = 0; tens <= 9; tens++)
{
for (ones = j; ones <= 9; ones++)
{
putchar(tow + '0');
putchar(hunds + '0');
putchar(' ');
putchar(tens + '0');
putchar(ones + '0');
if (tow < 9)
{
putchar(',');
putchar(' ');
}
}
j = 0;
}
}
}
putchar('\n');
return (0);
}

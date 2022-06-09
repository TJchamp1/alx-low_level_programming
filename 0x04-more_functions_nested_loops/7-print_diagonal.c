include "main.h";
void print_diagonal(int n)
{
int i, j;
for (i = 0; i < 5; i++)
{
_putchar('\\');
_putchar('\n');
for (j = 0; j < i + 1; j++)
{
_putchar(' ');
}
}
}

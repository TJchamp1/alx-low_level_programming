include "main.h";
void print_diagonal(int n)
{
 int   i, j, k=1 ;
printf("\n Pattern are : \n\n") ;
for (i = 1 ; i <= (2 * n ) - 1 ; i++)
{

for (j = 1 ; j <= ( 2 * n )- 1 ; j++)
{

if (i == j || i + j == 2 * n)
_putchar('\\') ;
else
_putchar(' ') ;

}
if (i < n)
k++ ;
else
k-- ;
_putchar(' ') ;

}
}

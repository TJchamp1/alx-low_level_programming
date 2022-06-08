#include "main.h"
#include<stdio.h>
/**
 * jack_bauer - funtction block
*/
void jack_bauer(void)
{
int hora;
int min;
for (hora = 0; hora <= 23; hora++)
{
for (min = 0; min <= 59; min++)
{
if (hora <= 9)
{
printf("0%d:",hora);
if (min <= 9)
{
printf("0%d\n",min);
}
else
{
printf("%d\n",min);
}
}
else
{
printf("%d:",hora);
if (min <= 9)
{
printf("0%d\n",min);
}
else{
printf("%d\n",min);
}
}
}
}
}

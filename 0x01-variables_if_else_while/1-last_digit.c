#include<stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - main block
 * Return: 0
 */
int main(void)
{
int n, lastdigit;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
lastdigit = n % 10;
if (lastdigit != 0 && lastdigit < 6)
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastdigit);
}
else if (lastdigit == 0)
{
printf("Last digit of %d is %d and is 0\n", n, lastdigit);
}
else if (lastdigit != 0 && lastdigit > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, lastdigit);
}


return (0);
}


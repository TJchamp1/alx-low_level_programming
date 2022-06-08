#include <stdio.h>
/**
 * main - main block
 * Return - 0
 */
int main() {
int i;
int t1 = 1, t2 = 2;
int nextTerm = t1 + t2;
printf("%d, %d, ", t1, t2);
for (i = 4; i <= 55; ++i) 
{
printf("%d, ", nextTerm);
t1 = t2;
t2 = nextTerm;
nextTerm = t1 + t2;
}
return (0);
}

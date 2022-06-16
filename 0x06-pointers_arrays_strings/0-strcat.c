#include "main.h"
#include<string.h>
/**
* *_strcat - function
* @dest: will be used
* @src: will be used
* Return: noting
*/
char *_strcat(char *dest, char *src)
{
int i = 0, j = 0;
while (dest[i] != '\0')  
{
++src;  
i++;  
}
dest[i + 1] = ' ';
while (src[j] != '\0')  
{  
*dest = *src;  
dest++;  
src++;  
j++;  
} 
return (dest);
}

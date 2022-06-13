#include "main.h"
#include<stdio.h>
#include<string.h>
/**
 * *_strcpy - function
 * @dest: will be used
 * @src: will be used
 * Return: @dest will be returned
 */
char *_strcpy(char *dest, char *src);
{
int i, len;
len = strlen(str);
for (i = 0; i < len; i++)
{
dest[i] = src[i];
}
return (*dest);
} 

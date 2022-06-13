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
int i;
dest = (char*)malloc(20);
for (i = 0; src[i] != '\0'; i++)
{
dest[i] = src[i];
}
return (*dest);
} 

#include "holberton.h"
#include <stdio.h>
/**
 * *_strncat - Concatenate two strings
 *@dest: Array that receive the other array
 *@src: Array to be added
 *@n: Total of byets of src
 *Return: Always 0.
 */

char *_strncat(char *dest, char *src, int n)
{
int i, j,  len1 = 0;
while (dest[i]  != '\0')
{
len1++;
i++;
}
for (j = 0; j < len1 && j < n; j++)
{
dest[len1 + j] = src[j];
}
dest[len1 + j] = '\0';
return (dest);
}

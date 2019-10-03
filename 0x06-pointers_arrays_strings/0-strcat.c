#include "holberton.h"
#include <stdio.h>
/**
 * *_strcat - Concatenate two strings
 *@dest: Array that receive the other array
 *@src: Array to be added
 *
 *Return: Always 0.
 */

char *_strcat(char *dest, char *src)
{
	int i, j,  len1 = 0;
while (dest[i]  != '\0')
{
len1++;
i++;
}

for (j = 0; j < len1; j++)
	{
		dest[len1 + j] = src[j];
}
dest[len1 + j] = '\0';
	return (dest);

}

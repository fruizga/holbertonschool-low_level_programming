#include "holberton.h"
#include <stdio.h>
/**
 * *_strcat - Concatenate two strings
 *@dest: Array that receive the other array
 *@src: Array to be added
 *Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
	int i, len1 = 0;

	for (i = 0; dest[i]; i++)
	{
		len1++;
}

	for (i = 0; i < len1 && src[i] != '\0'; i++)
	{
		dest[len1 + i] = src[i];
		dest[len1 + i]  = '\0';
}
	return dest;
}

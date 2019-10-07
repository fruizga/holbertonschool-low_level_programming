#include "holberton.h"
/**
 * *_strcpy - function will copy a string from one pointer to another
 * Return: function will return string to dest
 * @dest: string
 * @src: string to be copied
 */

char *_strcpy(char *dest, char *src)
{
int i, j;

	i = 0;
	j = 0;
	while (src[i] != '\0')
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	return (dest);
}

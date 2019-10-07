#include "holberton.h"
/**
 * *_memcpy - copy n bytes from src to dest
 *@n: number of bytes
 *@src: string to copy
 *@dest: store _memcpy result
 *Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *str_concat - Function
 *@s1: string 1
 *@s2: string 2
 *Return: New array
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, h, k = 0,  len1 = 0, sum = 0;
	char *pt;

	while (s1[i]  != '\0')
	{
		i++;
	}

	while (s2[j] != '\0')
	{
		j++;
}
	sum = i + j;
	pt = malloc(sizeof(char) * sum);

	len1 = i + j;

	if (pt == NULL)
	{
		return (NULL);
	}
	for (h = 0; h <= len1; h++)
	{
		if (h < i)
			pt[h] = s1[h];
		else
		{
			pt[h] = s2[k];
			k++;
		}
	}
	pt[h] = '\0';
	return (pt);
}

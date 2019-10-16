#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *alloc_grid - return an array pointer
 *@width: El ancho
 *@height: El alto
 *Return: pointer if is right or NULL if something is wrong
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **pt;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
}
pt = malloc(height * sizeof(int *));

if (pt == NULL)
{
	return (NULL);
}
for (i = 0; i < height; i++)
{
	pt[i] = malloc(width * sizeof(int));

	if (pt[i] == NULL)
	{
		for (j = i; j >= 0; j--)
		{
			free(pt[j]);
}
		free(pt);
		return (NULL);
}
}
for (i = 0; i < height; i++)
{
	for (j = 0; j < width; j++)
	{
		pt[i][j] = 0;
}
}
return (pt);
}

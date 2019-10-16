#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *free_grid - free memory
 *@grid: array as param
 *@height: array size
 *
 */
void free_grid(int **grid, int height)
{
	int j;
for (j = 0; j < height; j++)
{
	free(grid[j]);
}
free(grid);
}

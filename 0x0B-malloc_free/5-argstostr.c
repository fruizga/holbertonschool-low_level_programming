#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
*argstostr- concatenates all the arguments
*@ac: lenght of array arguments
*@av: Double pointer of array of arguments
*Return: array concatenated if everything is ok
*/
char *argstostr(int ac, char **av)
{
	int i, j, cont = 0, k = 0;
	char *p;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j])
		{
			j++;
			cont++;
		}
		j = 0;
	}
	j = 0;
	p = malloc(cont * sizeof(char) + ac + 1);

	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		while (av[i][j])
		{
			p[k] = av[i][j];
			j++;
			k++;
		}
		p[k] = '\n';
		j = 0;
		k++;
	}
	p[k] = '\0';
	return (p);
}

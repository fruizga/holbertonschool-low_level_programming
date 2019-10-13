#include <ctype.h>
#include <stdlib.h>
#include <stdio.h>
/**
* main - entry point
*@argv: array of arguments
*@argc: arg count
*Return: 0 if all is ok
*/
int main(int argc, char *argv[])
{
int i;
	int j;
	int sum;

	sum = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
				if (!isdigit(argv[i][j]))
				{
					printf("Error\n");
					return (1);
				}
			sum = sum + atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	else if (argc == 1)
		printf("0\n");
	return (0);

}

#include <stdio.h>
#include "function_pointers.h"
/**
 *main - entry point
 *@argc: number of arguments
 *@argv: array of arguments
 *Return: cero
 */
int main(int argc, char *argv[])
{
	int x = 0, y = 0, z = 0;

	int (*p)(int, int);

	if (argc !=  4)
	{
		printf("Error\n");
		exit(98);
	}

	x = atoi(argv[1]);
	y = atoi(argv[3]);
	p = get_op_func(argv[2]);

	if (p == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	z = p(x, y);

	print("%i\n", z);

	return (0);

}

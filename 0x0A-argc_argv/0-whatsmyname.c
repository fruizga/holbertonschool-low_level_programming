#include <stdlib.h>
#include <stdio.h>
/**
* main - entry point
*@argv: array of arguments
*@argc: arg count
*/
int main(int argc, char *argv[])
{
	int i = 0;
for (; i < argc; i++)
{
	printf("%s\n", argv[i]);
}
	return (0);
}

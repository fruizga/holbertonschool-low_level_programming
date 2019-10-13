#include <stdlib.h>
#include <stdio.h>
/**
* main - Prints all arguments received
*@argv: array of arguments
*@argc: arg count
*Return: 0 if all is ok
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

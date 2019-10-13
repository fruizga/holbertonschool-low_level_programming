#include <stdlib.h>
#include <stdio.h>
/**
* main - Multiply two arguments
*@argv: array of arguments
*@argc: arg count
*/
int main(int argc, char *argv[])
{
int i;
int multi;

if (argc == 3)
{
for (i = 1; i < argc; i++)
{
multi = atoi(argv[1]) * atoi(argv[2]);
}
printf("%d\n", multi);
}
else
{
printf("Error\n");
return (1);
}
 return (0);
}

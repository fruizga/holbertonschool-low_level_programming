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
int i, sum = 0, val;

if (argc > 1)
{
for (i = 0; i < argc; i++)
{
val = atoi(argv[i]);
if (val > 0)
{
sum = sum + atoi(argv[i]);
}
else
{
printf("Error\n");
return (1);
}
}
}
else
{
printf("0\n");
}

return (0);
}

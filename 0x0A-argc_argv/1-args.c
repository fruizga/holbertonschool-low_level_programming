#include <stdlib.h>
#include <stdio.h>
/**
*main - Princ total of arguments
*@argv: array of arguments
*@argc: arg count
*Return: 0 if all is ok.
*/
int main(int argc, char __attribute__((__unused__)) *argv[])
{
argc -= 1;
printf("%d\n", argc);
return (0);
}

#include <stdio.h>
/**
  * main - print 98 fibonacci.
  *
  * Return: Always 0.
  */
int main(void)
{
int num1 = 0;
int num2 = 1;
int aux, i;
for (i = 0; i < 99; i++)
{
aux = num1 + num2;
printf("%d, ", aux);
num1 = num2;
num2 = aux;
}
}

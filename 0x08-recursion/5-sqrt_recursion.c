#include "holberton.h"
/**
 *_sqrt_recursion - calculate square root
 *@n: number as parameter
 *Return: something
 *
 */
int _sqrt_recursion(int n);
{
int i = 0;
return (_parte_dos(n, i));
}

int _parte_dos(int n, int i)
{
if (i * i > n)
	return (-1);
if (i * i == n)
	return (i);
	return (_sqrt_recursion2(n, i + 1));
}

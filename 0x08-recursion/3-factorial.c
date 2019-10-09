#include "holberton.h"
/**
 * factorial - to know the factorial of a number
 *
 *@n: number
 *Return: factorial if n > 0
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
}
	else if (n == 0)
	{
		return (1);
}
	else
{
	return (n * factorial(n - 1));
}
}

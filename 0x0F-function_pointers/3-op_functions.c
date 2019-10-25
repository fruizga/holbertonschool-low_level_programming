#include <stdio.h>
#include "function_pointers.h"
#include <stdlib.h>
#include "3-calc.h"
/**
 *op_add - sum of two integers
 *@a: first number
 *@b: second number
 *Return: Result
*/
int op_add(int a, int b)
{
	return (a + b);
}
/**
 *op_sub - subtraction of two integers
 *@a: first number
 *@b: second number
 *Return: Result
*/
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 *op_mul - multiplies two integers
 *@a: first number
 *@b: second number
 *Return: Result
*/
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 *op_div - division of two integers
 *@a: first number
 *@b: second number
 *Return: Result
*/
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);

}
	return (a / b);
}
/**
 *op_mod - modulo of two integers
 *@a: first number
 *@b: second number
 *Return: Result
*/
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}

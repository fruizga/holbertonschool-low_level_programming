#include <stdio.h>
#include "function_pointers.h"
/**
*get_op_func - pointer to get the character of operation
*@s: string of operators
*Return: NULL if operartion doesn't exist'
*/
int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};
int i = 0;

while (ops[i].op)
{
	if (ops[i].op == s)
	{
		return (ops[i].f);
	}
			i++;
}
	return (NULL);
}

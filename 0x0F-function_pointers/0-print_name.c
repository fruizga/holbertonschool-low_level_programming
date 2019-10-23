#include <stdio.h>
#include "function_pointers.h"
/**
 *print_name -prints the name
 *@name:name as pointer
 *@f: pointer
 *Return: 0 if everything is ok
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
	f(name);
	}
}

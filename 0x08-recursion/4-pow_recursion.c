#include "holberton.h"
/**
 *_pow_recursion - x raised y
 *@x: number
 *@y: power
 *Return: num pow and -1 if y = 0
 */
int _pow_recursion(int x, int y)
{
	int r = 0;

	if (y < 0)
	{
		return (-1);
}
	if (y > 0)
	{
		return (r = x * _pow_recursion(x, (y - 1)));
}
return (1);

}

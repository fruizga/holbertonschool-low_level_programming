#include "holberton.h"

/**
 * _abs - function that computes absolute value of an integer
 * @r: The character to print
 * Description: computes the absolute value of an integer
 * 
 */
int _abs(int r)
{
if (r < 0)
{
return (-r);
}
else
{
return (r);
}
return (0);
}

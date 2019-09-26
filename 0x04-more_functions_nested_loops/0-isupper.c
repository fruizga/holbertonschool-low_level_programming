#include "holberton.h"

/**
 * _isupper - checks if the letter is upper
 *@c:This is the character to check
 * Description: finds if the case is lower
 * Return: 1 if c is upper or 0 otherwise
 */
int _isupper(int c)
{
if (c <= 'Z' && c >= 'A')
{
return (1);
}
else
{
return (0);
}
}

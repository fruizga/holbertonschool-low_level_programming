#include "holberton.h"
/**
 * _isalpha - entry point
 * @c: The character to print
 * Description: return a 1 is a letter, lowercase or uppercase or 0 otherwise
 * Return: 1 or 0
 */
int _isalpha(int c)
{
if ((c > 'a' && c < 'z') || (c > 'A' && c < 'Z'))
return (1);
else
return (0);
}

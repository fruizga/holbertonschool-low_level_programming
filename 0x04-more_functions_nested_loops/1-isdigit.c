#include "holberton.h"

/**
 * _isdigit - checks if character is a digit
 *@c:This is the character to check
 * Description: finds if the case is lower
 * Return: 1 if c is a digit or 0 otherwise
 */

int _isdigit(int c)
{
	if (c <= 57 && c >= 48)
		return (1);
	else
		return (0);
}

#include "holberton.h"

/**
 * _islower - checks if the case is lower
 *@chrt:THis is teh character to print
 * Description: finds if the case is lower
 * Return: 1 if c is lower or 0 otherwise
 */
int _islower(int chrt)
{
if (chrt < 'z' && chrt > 'a')
return (1);
else
return (0);
}

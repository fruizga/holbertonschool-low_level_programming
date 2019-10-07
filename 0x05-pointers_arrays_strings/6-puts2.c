#include "holberton.h"

/**
 * puts2 - takes a string from the main function.
 * @str: pointer to a string in the main function.
 * Description: Prints only every other character in a string.
 * Return: nothing
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}

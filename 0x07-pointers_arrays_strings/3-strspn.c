#include "holberton.h"
/**
 * _strspn - counting prefix bytes
 *@s: prefix
 *@accept: characters to find
 *Return: only success
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, cnt = 0;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == ',')
		{
			break;
}
		else
{
for (j = 0; accept[j]; j++)
{
if (s[i] == accept[j] && s[i] != ',')
{
	cnt++;
}
}
}
}
return (cnt);
}

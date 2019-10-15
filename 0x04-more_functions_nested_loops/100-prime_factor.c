#include <stdio.h>

/**
 * main - finds and prints the largest prime factor of the number 612852475143
 *
 * Return: On success 1.
 * On error, -1 is returne.
 */

int main(void)
{

long int n = 612852475143;
long int div = 2;
long int max;

while ((n / 2) != 0)
{
	if ((n % div) != 0)
	{
	div = div + 1;
	}
	else
	{
	max = n;
	n = n / div;
		if (n == 1)
		{
		printf("%ld\n", max);
		break;
		}
	}
}
return (0);
}

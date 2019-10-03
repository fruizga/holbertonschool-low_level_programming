#include "holberton.h"

/**
 * reverse_array - Reverse an array
 *@a: Array
 *@n: Array length
 *
 *Return: Always 0.
 */
void reverse_array(int *a, int n)
{
int i, tmp;

for (i = 0; i < n; i++)
{
tmp = a[i];
a[i] = a[n - 1];
a[n - 1] = tmp;
n--;


}
}

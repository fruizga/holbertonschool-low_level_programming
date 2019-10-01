#include "holberton.h"
/**
 * swap_int - Swap two variables
 *Description: swap varaaibles value
 *@a: Frist variabl to swap
 *@b: Other variable to swap
 */
void swap_int(int *a, int *b)
{
	int tmp = *b;
	*b = *a;
	*a = tmp;
}

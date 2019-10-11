#include "holberton.h"
/**
 *is_prime_number - define if a number is prime
 *
 *@n: number to evaluate
 *Return: if number is prime or not
 *
 *
 */
int is_prime_number(int n)
{
	int primo;

primo = 2;
primo = prime_check(n, primo);
return (primo);
}
/**
* prime_check - to evaluate the number
*@n: number to evaluate
 *Return: if number is prime or no
 *@primo: to evaluate something
*/

int prime_check(int n, int primo)
{
if (n == primo)
	return (1);
	if (n % primo == 0 || n <= 1)
		return (0);
	return (prime_check(n, primo + 1));
}

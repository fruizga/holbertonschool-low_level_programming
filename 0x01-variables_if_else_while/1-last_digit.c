#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int n, ultimo;
srand(time(0));
n = rand() - RAND_MAX / 2;
<<<<<<< HEAD
ultimo = n % 10;
if (n > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, ultimo);
}
else if (n==0)
=======
ultimo = n%10;
if (ultimo > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, ultimo);
}
else if (ultimo == 0)
>>>>>>> 2f0dbe2f48b2a7e99229d926cf62a560e6ca13ca
{
printf("Last digit of %d is %d and is 0\n", n, ultimo);
}
<<<<<<< HEAD
else if (n != 0 && n < 6)
=======
else if (ultimo != 0 && n < 6)
>>>>>>> 2f0dbe2f48b2a7e99229d926cf62a560e6ca13ca
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, ultimo);
}

return (0);
}

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
ultimo = n%10;
if (n > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, ultimo);
}
else if (n == 0)
{
  printf("Last digit of %d is %d and is 0\n", n, ultimo);
}
else if (n!=0 && n<6)
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, ultimo);
}

return (0);
}

#include <stdio.h>
#include <stdlib.h>
/**
* main - prints the minimum number of coins
* @argc: int argument count
* @argv: char argument
* Return: 0
*/
int main(int argc, char *argv[])
{
int cents, coins = 0, total = 0;

if (argc < 2)
{
	printf("Error\n");
	return (0);
}
cents = atoi(argv[1]);
total = cents;
while (total > 0)
{
	if (total >= 25)
		total = total - 25;
	else if (total >= 10 && total < 25)
		total = total - 10;
	else if (total >= 5 && total < 10)
		total = total - 5;
	else if (total >= 2 && total < 5)
		total = total - 2;
	else if (total == 1)
		total = total - 1;
	coins++;
}
printf("%d\n", coins);
return (0);
}

#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char lt;
for (lt = 'z'; lt >= 'a'; lt--)
{
putchar(lt);
}
putchar('\n');
return (0);
}
